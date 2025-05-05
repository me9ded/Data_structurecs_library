#include <stdlib.h>
#include "hash_table.h"

Hash_Table * arr;

Hash_Table *create_hash_table(){
    arr = (Hash_Table *)malloc(sizeof(Hash_Table));
    if(!arr)
        return;
    arr->keys = (int *)malloc(sizeof(int));
    if(!arr->keys)
        return;
    
    return arr;
}

void add(int number){
    int i;
    if(arr->keys[number]!=0){
        return;
    }
    for (i = 0; i < arr->size;i++){
    }
}