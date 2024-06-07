///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define SIZE 1000 // The limit of expression length

/////////////////////////////////////////////////

typedef struct _listnode
{
    char item;
    struct _listnode *next;
} ListNode;

typedef struct _linkedlist
{
    int size;
    ListNode *head;
} LinkedList;

////////////////////////////////// stack    ///////////////////////////////////////////////////////

typedef struct stack
{
    LinkedList ll;
} Stack;

//////////////////////// function prototypes //////////////////////////////////////////////////////

// You should not change the prototypes of these functions
void infixtoPrefix(char *infix, char *prefix);
int precedence(char op); // you may use this function

///////////////////////////////////////////////////////////////////////////////////////////////
void push(Stack *s, char item);
int pop(Stack *s);
int peek(Stack *s);
int isEmptyStack(Stack *s);

///////////////////////////////////////////////////////////////////////////////////////////////////
void printList(LinkedList *ll);
ListNode *findNode(LinkedList *ll, int index);
int insertNode(LinkedList *ll, int index, char item);
int removeNode(LinkedList *ll, int index);
void removeAllItems(LinkedList *ll);

///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char infix[SIZE];
    char prefix[SIZE];

    printf("Enter an infix expression:\n");
    scanf("%[^\n]%*c", infix);

    infixtoPrefix(infix, prefix);
    printf("The prefix expression is \n");
    printf("%s\n", prefix);
    return 0;
}

void infixtoPrefix(char *infix, char *prefix)
{
    char temp;

    int length = strlen(infix);

    Stack *reverse = malloc(sizeof(Stack));
    reverse->ll.head = NULL;
    reverse->ll.size = 0;

    Stack *postFix = malloc(sizeof(Stack));
    postFix->ll.head = NULL;
    postFix->ll.size = 0;

    Stack *operators = malloc(sizeof(Stack));
    operators->ll.head = NULL;
    operators->ll.size = 0;

    // reverse the string
    for (int i = 0; i < length; i++)
    {
        push(reverse, infix[i]);
    }

    // convert to post fix pop greater precedence only
    // push back into the original string
    for (int j = 0; j < length; j++)
    {
        temp = pop(reverse);

        if (isalnum(temp))
        {
            push(postFix, temp);
        }
        else
        {

            // precedence and bracket checking
            // if is () closing bracket will clear until (
            if (temp == ')')
            {
            }

            else if (temp == '(')
            {
                while (peek(operators) != ')')
                {
                    push(postFix, pop(operators));
                }

                // remove the ')'
                pop(operators);
            }

            // if smaller precedence clear until ( or empty stack
            else if (!isEmptyStack(operators))
            {
                if (precedence(temp) < precedence(peek(operators)))
                {
                    while (!isEmptyStack(operators))
                    {

                        if (precedence(peek(operators)) > precedence(temp))
                        {
                            push(postFix, pop(operators));
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            /*
                add the new operator to the stack  - can be the last case also where the precedence is the same or bigger
                But it also cover the brackets and smaller precedence case as have to add the new operators in the end either way
                so add here to cover it as a universal condition
            */

            if (temp != '(')
            {
                push(operators, temp);
            }
        }

        // if at the last term in the infix need check if the oeprator stack is empty
        if (j == length - 1)
        {
            while (!isEmptyStack(operators))
            {
                if (peek(operators) == '(' || peek(operators) == ')')
                {
                    pop(operators);
                }
                else
                {
                    push(postFix, pop(operators));
                }
            }
        }
    }

    // reverse the post fix back to prefix
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        prefix[counter++] = pop(postFix);
    }
    prefix[counter] = '\0';
}

int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////

void push(Stack *s, char item)
{
    insertNode(&(s->ll), 0, item);
}

int pop(Stack *s)
{
    char item;
    if (!isEmptyStack(s))
    {
        item = ((s->ll).head)->item;
        removeNode(&(s->ll), 0);
        return item;
    }
    return INT_MIN;
}

int peek(Stack *s)
{
    return ((s->ll).head)->item;
}

int isEmptyStack(Stack *s)
{
    if ((s->ll).size == 0)
        return 1;
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////

void printList(LinkedList *ll)
{

    ListNode *cur;
    if (ll == NULL)
        return;
    cur = ll->head;

    if (cur == NULL)
        printf("Empty");
    while (cur != NULL)
    {
        printf("%c ", cur->item);
        cur = cur->next;
    }
    printf("\n");
}

ListNode *findNode(LinkedList *ll, int index)
{

    ListNode *temp;

    if (ll == NULL || index < 0 || index >= ll->size)
        return NULL;

    temp = ll->head;

    if (temp == NULL || index < 0)
        return NULL;

    while (index > 0)
    {
        temp = temp->next;
        if (temp == NULL)
            return NULL;
        index--;
    }

    return temp;
}

int insertNode(LinkedList *ll, int index, char value)
{

    ListNode *pre, *cur;

    if (ll == NULL || index < 0 || index > ll->size + 1)
        return -1;

    // If empty list or inserting first node, need to update head pointer
    if (ll->head == NULL || index == 0)
    {
        cur = ll->head;
        ll->head = malloc(sizeof(ListNode));
        ll->head->item = value;
        ll->head->next = cur;
        ll->size++;
        return 0;
    }

    // Find the nodes before and at the target position
    // Create a new node and reconnect the links
    if ((pre = findNode(ll, index - 1)) != NULL)
    {
        cur = pre->next;
        pre->next = malloc(sizeof(ListNode));
        pre->next->item = value;
        pre->next->next = cur;
        ll->size++;
        return 0;
    }

    return -1;
}

int removeNode(LinkedList *ll, int index)
{

    ListNode *pre, *cur;

    // Highest index we can remove is size-1
    if (ll == NULL || index < 0 || index >= ll->size)
        return -1;

    // If removing first node, need to update head pointer
    if (index == 0)
    {
        cur = ll->head->next;
        free(ll->head);
        ll->head = cur;
        ll->size--;

        return 0;
    }

    // Find the nodes before and after the target position
    // Free the target node and reconnect the links
    if ((pre = findNode(ll, index - 1)) != NULL)
    {

        if (pre->next == NULL)
            return -1;

        cur = pre->next;
        pre->next = cur->next;
        free(cur);
        ll->size--;
        return 0;
    }

    return -1;
}