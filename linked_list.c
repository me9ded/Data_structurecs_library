#include <stdlib.h>
#include "linked_list.h"

void add_at_last(Node **head,Node *node_to_add){
    Node *current = *head;
    while(current!=NULL){
        current = current->next;
    }
    current->next = node_to_add;
}

void add_at_beginning(Node **head,Node *node_to_add){
    if(head==NULL){
        *head = node_to_add;
    }
    node_to_add->next = *head;

}
int count_nodes(Node **head){
    int result=0;
    Node *current = *head;
    while(current!=NULL){
        result++;
        current = current->next;
    }
    return result;
}
void add_at_middle(Node **head,Node *node_to_add){
    int number_of_nodes;
    int i;
    Node *current = *head;
    number_of_nodes = count_nodes(head);
    if(number_of_nodes%2!=0)
        number_of_nodes = number_of_nodes / 2 + 1;
    else
        number_of_nodes = number_of_nodes / 2;
    for (i = 0; i <= number_of_nodes;i++){
        current = current->next;
    }
    node_to_add->next=current->next;
    current->next=node_to_add;
}

void delete_at_beginning(Node *head){
    if(head==NULL){
        return;
    }
    *head = *head->next;
}

void delete_at_end(Node **head){
    if(*head==NULL){
        return;
    }
    Node *current = *head;
    while(current!=NULL){
        current = current->next;
    }
    free(current);
}



void delete_at_middle(Node **head){
    int number_of_nodes;
    Node *current;
    int i;
    number_of_nodes = count_nodes(head);
    if(number_of_nodes%2!=0)
        number_of_nodes = number_of_nodes / 2 + 1;
    else
        number_of_nodes = number_of_nodes / 2 + 1;
    current = *head;
    for (i = 0; i < number_of_nodes-1;i++){
        current = current->next;
    }
    current->next = current->next->next;
}
