#include <stdlib.h>
#include <stdbool.h>
#ifndef SET
#define SET

typedef struct set{
    int* elements;
    size_t capacity;
    size_t size;
} set;

bool add(set* temp,int number);
bool delete(set* temp,int number);
int search(set* temp,int number);
set* create_set(size_t capacity);
#endif