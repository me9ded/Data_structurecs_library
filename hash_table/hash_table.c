#include <stdlib.h>
#include "hash_table.h"

// for all functions 0 indicates a failure while 1 indicates a success.

Hash_Table *arr;
int i;

int create_hash_table(Hash_Table *arr)
{
    arr = (Hash_Table *)malloc(sizeof(Hash_Table));
    if (!arr)
        return 0;
    arr->keys = (int *)calloc(10,sizeof(int));
    if (!arr->keys)
        return 0;
    arr->values = (int *)calloc(10,sizeof(int));
    if (!arr->values)
        return 0;
    return 1;
}

int add(Hash_Table *arr, int number)
{

    for (i = 0; i < arr->size-1; i++)
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
    int j;
    for (i = 0; i < arr->size-1; i++)
    {
        if(arr->keys[i] == number){
            for (j = i; j < arr->size - 1;j++){
                arr->keys[j] = arr->keys[j + 1];
                arr->values[j] = arr->values[j + 1];
            }
        }
    }

    arr->size -= 1;

    return 1;
}

int search(Hash_Table *arr, int number)
{
    int result = 0;
    for (i = 0; i < arr->size-1; i++)
    {
        if (arr->keys[i] == number)
        {
            result = arr->values[i];
        }
    }

    return result;
}