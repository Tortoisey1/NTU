#include <stdio.h>
#include <stdlib.h>

#define TABLESIZE 37
#define PRIME 13

enum Marker
{
    EMPTY,
    USED,
    DELETED
};

typedef struct _slot
{
    int key;
    enum Marker indicator;
} HashSlot;

int HashInsert(int key, HashSlot hashTable[]);
int HashDelete(int key, HashSlot hashTable[]);

int hash1(int key);
int hash2(int key);

int main()
{
    int opt;
    int i;
    int key;
    int comparison;
    HashSlot hashTable[TABLESIZE];

    for (i = 0; i < TABLESIZE; i++)
    {
        hashTable[i].indicator = EMPTY;
        hashTable[i].key = 0;
    }

    printf("============= Hash Table ============\n");
    printf("|1. Insert a key to the hash table  |\n");
    printf("|2. Delete a key from the hash table|\n");
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
            comparison = HashInsert(key, hashTable);
            if (comparison < 0)
                printf("Duplicate key\n");
            else if (comparison < TABLESIZE)
                printf("Insert: %d Key Comparisons: %d\n", key, comparison);
            else
                printf("Key Comparisons: %d. Table is full.\n", comparison);
            break;
        case 2:
            printf("Enter a key to be deleted:\n");
            scanf("%d", &key);
            comparison = HashDelete(key, hashTable);
            if (comparison < 0)
                printf("%d does not exist.\n", key);
            else if (comparison <= TABLESIZE)
                printf("Delete: %d Key Comparisons: %d\n", key, comparison);
            else
                printf("Error\n");
            break;
        case 3:
            for (i = 0; i < TABLESIZE; i++)
                printf("%d: %d %c\n", i, hashTable[i].key,
                       hashTable[i].indicator == DELETED ? '*' : ' ');
            break;
        }
        printf("Enter selection: ");
        scanf("%d", &opt);
    }
    return 0;
}

int hash1(int key) { return (key % TABLESIZE); }

int hash2(int key) { return (key % PRIME) + 1; }

int HashInsert(int key, HashSlot hashTable[])
{
    int count = 0;
    int compare = 0;
    int insertIndex = hash1(key);

    HashSlot *temp;
    HashSlot *firstDelete = NULL;

    while (count < TABLESIZE)
    {
        temp = &hashTable[insertIndex];
        // if empty
        if (temp->indicator == EMPTY)
        {
            // if there was a deleted slot before this use that one instead
            if (firstDelete != NULL)
            {
                firstDelete->key = key;
                firstDelete->indicator = USED;
                return compare;
            }
            else
            {
                temp->key = key;
                temp->indicator = USED;
                return compare;
            }
        }
        else if (temp->indicator == USED)
        {
            // duplicate key
            if (temp->key == key)
            {
                return -1;
            }
            compare++;
        }
        // if deleted
        else if (temp->indicator == DELETED)
        {
            // choose this slot as the first slot to insert
            if (firstDelete == NULL)
            {
                firstDelete = temp;
            }
        }
        count++;
        insertIndex = hash1((key) + count * hash2(key));
    }

    // if first deleted not empty means can put there other slots dh the key
    if (firstDelete != NULL)
    {
        firstDelete->key = key;
        firstDelete->indicator = USED;
        return compare;
    }

    return TABLESIZE;
}

int HashDelete(int key, HashSlot hashTable[])
{
    int count = 0;
    int compare = 0;
    int deleteIndex = hash1(key);

    HashSlot *temp;
    HashSlot *firstDelete = NULL;

    while (count < TABLESIZE)
    {
        temp = &hashTable[deleteIndex];

        // if empty means doesnt exist
        if (temp->indicator == EMPTY)
        {
            return -1;
        }

        // if deleted
        else if (temp->indicator == DELETED)
        {
            // the number was deleted before so now dont exist
            if (temp->key == key)
            {
                return -1;
            }
        }
        // if used
        else if (temp->indicator == USED)
        {
            compare++;
            // found key
            if (temp->key == key)
            {
                temp->indicator = DELETED;
                return compare;
            }
        }
        count++;
        deleteIndex = hash1((key) + count * hash2(key));
    }

    // doesnt exist

    return -1;
}
