#include "queue.h"
#include <stdlib.h>

queue *arr;

void create_queue(){
    arr->elements = (queue *)malloc(sizeof(int));
    // the default value will be 10 for easier implementation.
    arr->size = 10;
    // the front index will keep track of the latest element to from the queue.
    arr->front = 0;
    // the last index will keep track of the last element to add to the queue.
    arr->rear = 9;
    // the capacity member will keep us informed about how many elements we have in the queue 
    arr->capacity = 0;
}

void enqueue(int number_to_add){
    if(arr->capacity==arr->size){
        // this return statement will break the function and stopping it's execution.
        return;
    }
    arr->elements[arr->rear] = number_to_add;
}

void dequeue(int number_to_delete){
    if(arr->capacity==0){
        return;
    }
    free(arr->elements[arr->front]);
}

int search(int number_to_find){
    int i;
    for (i = 0; i < arr->capacity;i++){
        if(arr->elements[i]==number_to_find){
            // 0 is a flag for true
            return 0;
        }
    }
    // 1 is a flag for false
    return 1;
}