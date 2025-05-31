#include <stdlib.h>
#include "hash_table.h"

// for all functions 0 indicates a failure while 1 indicates a success.

Hash_Table* create_hash_table()
{
    Hash_Table *arr = (Hash_Table *)malloc(sizeof(Hash_Table));
    if (!arr)
        return 0;
    arr->keys = (int *)calloc(10,sizeof(int));
    if (!arr->keys)
        return 0;
    arr->values = (int *)calloc(10,sizeof(int));
    if (!arr->values)
        return 0;
    // for testing purposes the hash table size is fixed
    arr->size = 10;
    return arr;
}

int add(Hash_Table *arr, int number)
{
    int i;
    for (i = 0; i < arr->size - 1; i++){
        if (arr->keys[i] == number){
            arr->values[i]++;
            return 1;
        }
    }
    // if the number does not exist in the hash table then we will reserve a new spot for it.
    for (i = 0; i < arr->size;i++){
        if(arr->keys[i]==0 && arr->values[i]==0){
            arr->keys[i] = number;
            arr->values[i]=1;
            return 1;
        }
    }

    // the hash table if full and cannout accept new entries.
    return 0;
}

int delete(Hash_Table *arr, int number)
{
    int i;
    int j;

    for (i = 0; i < arr->size; i++){
        // if the number is found that is when we delete it.
        if(arr->keys[i] == number){
            for (j = i; j < arr->size - 1;j++){
                arr->keys[j] = arr->keys[j + 1];
                arr->values[j] = arr->values[j + 1];
            }
            arr->keys[arr->size - 1] = 0;
            arr->values[arr->size - 1] = 0;
            arr->size -= 1;
            return 1;
        }
    }

    return 0;
}

int search(Hash_Table *arr, int number)
{
    int i;
    for (i = 0; i < arr->size; i++)
    {
        if (arr->keys[i] == number)
        {
            return arr->values[i];
        }
    }
    // the number does not exist in the hash table.
    return 0;
}