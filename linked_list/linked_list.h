#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct Node{
    struct Node* next;
    struct Node* prev;
    int data;
}Node;
Node **create_linked_list();
Node *create_node(int data);
int add_at_last(Node **head, Node *node_to_add);
int add_at_beginning(Node **head,Node *node_to_add);
int add_at_middle();
int delete_at_beginning();
int delete_at_end();
int delete_at_middle();
int count_nodes(Node **head);

#endif 