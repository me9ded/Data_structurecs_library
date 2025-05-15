#ifndef QUEUE
#define QUEUE
// the queue is going to be an array based implementation.
typedef struct queue
{
    int front;
    int rear;
    int size;
    int *elements;
    int capacity;
} queue;
// basic queue functions.
void create_queue();
void enqueue(int number_to_add);
void dequeue(int number_to_delete);
int search(int number);

#endif