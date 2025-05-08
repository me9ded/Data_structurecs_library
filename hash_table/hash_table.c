#include <stdlib.h>
#include "hash_table.h"

Hash_Table *arr;
int i;

Hash_Table *create_hash_table()
{
    arr = (Hash_Table *)malloc(sizeof(Hash_Table));
    if (!arr)
        return;
    arr->keys = (int *)malloc(sizeof(int));
    if (!arr->keys)
        return;
    arr->values = (int *)malloc(sizeof(int));
    if (arr->values)
        return;
    return arr;
}

void add(int number)
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
}

void delete(int number)
{

    for (i = 0; arr->size; i++)
    {
        if (arr->keys[i] == number)
        {
            free(arr->keys[i]);
            free(arr->values[i]);
        }
    }
}

int search(int number)
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