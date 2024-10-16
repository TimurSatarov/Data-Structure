#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"



LinkedList* createLinkedList() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    if (!list) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    list->head = NULL;
    return list;
}
void add(LinkedList* list, int data){
    Node *node = (Node*)malloc(sizeof(Node));
    if(!node){
        printf("Memory alloction failed!\n");
        return;
    }
    node->data = data;
    node->next = NULL;
    if(list->tail == NULL){
        list->head = node;
        list->tail = node;
    }else{
        list->tail->next = node;
        list->tail = node;
    }
}
void insert(LinkedList* list, int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) {
        printf("Memory allocation failed!\n");
        return;
    }
    node->data = data;
    node->next = list->head;
    list->head = node;
}

void removeFirst(LinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }
    Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
}

void print(LinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void clear(LinkedList* list) {
    Node* current = list->head;
    Node* nextNode;
    
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    free(list);
}
