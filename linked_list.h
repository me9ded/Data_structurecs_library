#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct Node{
    Node *next;
    Node *prev;
    int data;
}Node;

void add_at_last(Node **head,Node *node_to_add);
void add_at_beginning(Node **head,Node *node_to_add);
void add_at_middle();
void delete_at_beginning();
void delete_at_end();
void delete_at_middle();
int count_nodes(Node **head);

#endif 