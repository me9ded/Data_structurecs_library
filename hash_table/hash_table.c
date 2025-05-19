#include <stdlib.h>
#include "hash_table.h"

// for all functions 0 indicates a failure while 1 indicates a success.

Hash_Table *arr;
int i;

int *create_hash_table(Hash_Table *arr)
{
    arr = (Hash_Table *)malloc(sizeof(Hash_Table));
    if (!arr)
        return 0;
    arr->keys = (int *)malloc(sizeof(int));
    if (!arr->keys)
        return 0;
    arr->values = (int *)malloc(sizeof(int));
    if (!arr->values)
        return 0;
    return 1;
}

int add(Hash_Table *arr, int number)
{

    for (i = 0; i < arr->size; i++)
    {
        if (arr->keys[i] == number)
        {
            arr->values[i]++;
        }
        else
        {
            arr->keys[i] = number;
            arr->values[i]++;
        }
    }

    return 1;
}

int delete(Hash_Table *arr, int number)
{

    for (i = 0; arr->size; i++)
    {
        if (arr->keys[i] == number)
        {
            free(arr->keys[i]);
            free(arr->values[i]);
        }
    }

    return 1;
}

int search(Hash_Table *arr, int number)
{
    int result = 0;
    for (i = 0; i < arr->size; i++)
    {
        if (arr->keys[i] == number)
        {
            result = arr->values[i];
        }
    }

    return result;
}