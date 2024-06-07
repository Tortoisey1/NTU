#include <stdio.h>
#include <stdlib.h>

#define TABLESIZE 37
#define PRIME 13

enum Marker
{
    EMPTY,
    USED
};

typedef struct _slot
{
    int key;
    enum Marker indicator;
    int next;
} HashSlot;

int HashInsert(int key, HashSlot hashTable[]);
int HashFind(int key, HashSlot hashTable[]);

int hash(int key) { return (key % TABLESIZE); }

int main()
{
    int opt;
    int i;
    int key;
    int index;
    HashSlot hashTable[TABLESIZE];

    for (i = 0; i < TABLESIZE; i++)
    {
        hashTable[i].next = -1;
        hashTable[i].key = 0;
        hashTable[i].indicator = EMPTY;
    }

    printf("============= Hash Table ============\n");
    printf("|1. Insert a key to the hash table  |\n");
    printf("|2. Search a key in the hash table  |\n");
    printf("|3. Print the hash table            |\n");
    printf("|4. Quit                            |\n");
    printf("=====================================\n");

    printf("Enter selection: ");
    scanf("%d", &opt);
    while (opt >= 1 && opt <= 3)
    {
        switch (opt)
        {
        case 1:
            printf("Enter a key to be inserted:\n");
            scanf("%d", &key);
            index = HashInsert(key, hashTable);
            if (index < 0)
                printf("Duplicate key\n");
            else if (index < TABLESIZE)
                printf("Insert %d at index %d\n", key, index);
            else
                printf("Table is full.\n");
            break;
        case 2:
            printf("Enter a key for searching in the HashTable:\n");
            scanf("%d", &key);
            index = HashFind(key, hashTable);

            if (index != -1)
                printf("%d is found at index %d.\n", key, index);
            else
                printf("%d is not found.\n", key);
            break;

        case 3:
            printf("index:\t key \t next\n");
            for (i = 0; i < TABLESIZE; i++)
                printf("%d\t%d\t%d\n", i, hashTable[i].key, hashTable[i].next);
            break;
        }
        printf("Enter selection: ");
        scanf("%d", &opt);
    }
    return 0;
}

int HashInsert(int key, HashSlot hashTable[])
{
    int hashValue = hash(key);
    int insertIndex = hashValue;
    int count = 0;

    HashSlot *temp;

    while (count < TABLESIZE)
    {
        // go into insertindex and get the slot
        temp = &hashTable[insertIndex];

        // if slot is empty put into the slot
        if (temp->indicator == EMPTY)
        {
            temp->key = key;
            temp->indicator = USED;
            // if this current index is not the hash value and probing is used
            if (insertIndex != hashValue)
            {
                temp = &hashTable[hashValue];
                while (temp->next != -1)
                {
                    temp = &hashTable[temp->next];
                }
                temp->next = insertIndex;
            }

            return insertIndex;
        }
        else
        {
            // if duplicate key return -1
            if (temp->key == key)
            {
                return -1;
            }
            // else insertindex change to the next index stored in the slot
            else
            {
                insertIndex = (insertIndex + 1) % TABLESIZE;
                count++;
            }
        }
    }

    // will only reach here when search index is -1 means no key and no after slot
    // to search for already

    return TABLESIZE;
}

int HashFind(int key, HashSlot hashTable[])
{

    int searchIndex = hash(key);

    HashSlot temp;

    while (searchIndex != -1)
    {
        // go into the searchindex and get the slot
        temp = hashTable[searchIndex];

        // if slot is empty
        if (temp.indicator == EMPTY)
        {
            return -1;
        }
        else
        {
            // if slot key is the same return index
            if (temp.key == key)
            {
                return searchIndex;
            }
            // else searchindex change to the next index stored in the slot
            else
            {
                searchIndex = temp.next;
            }
        }
    }

    // will only reach here when search index is -1 means no key and no after slot
    // to search for already

    return -1;
}