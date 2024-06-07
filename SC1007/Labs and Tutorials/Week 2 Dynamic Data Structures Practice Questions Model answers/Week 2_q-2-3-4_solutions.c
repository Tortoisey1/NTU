////////////////////////////////////////////////////////////

//#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

////////////////////////////////////////////////////////////

typedef struct _listnode{
	int item;
	struct _listnode *next;
} ListNode;

//////////////////////////////////////////////////////

int searchList(ListNode *head, int value);

//////////////////////////////////////////////////////

void main()
{
	ListNode *head, *p, *temp;
	int n;

	//char *s;

	//s=(char *)malloc(1000000000000000000);
	//if(s==NULL)
	//	printf("no");

	head=NULL;
	p=NULL;		// pointing to the last node in the list
	printf("Enter a list of numbers, terminated by the value -1:\n");

	//begin to build the linked list
	scanf("%d", &n);
	while (n!=-1)
	{
		if (head==NULL)
		{
			head=(ListNode *)malloc(sizeof(ListNode));
			p=head;
		}
		else
		{
			p->next=(ListNode *)malloc(sizeof(ListNode));
			p=p->next;
		}
		p->item=n;
		p->next=NULL;
		scanf("%d", &n);
	} //end of building the list

	//print the items of the current linked list.
	printf("Current list:");
	p=head;
	while (p!=NULL)
	{
		printf("%d ",p->item);
		p=p->next;
	}
	printf("\n");

	//search for a value in the list. Q3
	printf("Enter value to search for:");
	scanf("%d", &n);
	searchList(head,n);

	//free up memory. Q4.

	//this part is wrong. It will cause problems.
	p = head;
	while (p!= NULL) {
		free(p);
		p=p->next;
	}

	//rewrite the free up using temporary pointer temp.

	p = head;
	while (p!= NULL) {
		temp=p->next;
		free(p);
		p=temp;
	}
	p=temp=head=NULL;

}

////////////////////////////////////////////////////////////

int searchList(ListNode *head, int value)
{
	int i = 0;
	ListNode *p = head;

	while (p != NULL)
	{
		if (p->item == value)
		{
			printf("Value %d found at index %d\n", value, i);
			return i;
		}
		p = p->next;
		i++;
	}

	printf("Value %d can not be found!\n", value);
	return -1;
}
