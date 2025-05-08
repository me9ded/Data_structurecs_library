#include <stdlib.h>
#include <stdbool.h>
#include "set.h"


// the set for now will be accepting integers as elements.
set* create_set(size_t capacity){
    set* arr = (set *)malloc(sizeof(set));
    if(!arr){
        return;
    }

    arr->capacity = malloc(capacity * sizeof(int));
    if(!arr->capacity){
        return;
    }

    arr->size = sizeof(arr->capacity) / sizeof(int);

    return arr;
}
bool add(set* input_set,int number){
    int i;
    for (i = 0; i < input_set->capacity;i++){
        if(input_set->elements[i]==number)
            return false;
    }
    input_set->elements[input_set->size] = number;
    return true;
}

bool delete(set* input_set,int number){
    int i;
    if (search(input_set, number) == false)
        return false;
    for (i = 0; i < input_set->capacity;i++){

    }
}

int search(set* input_set,int number){
    int i;
    for (i = 0; i < input_set->capacity;i++){
        if(input_set->elements[i]==number)
            return i;
    }
    return 0;
}