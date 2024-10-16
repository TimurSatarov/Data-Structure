#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// LinkedList structure
typedef struct LinkedList {
    Node* head;
    Node* tail;
} LinkedList;

// Function prototypes
LinkedList* createLinkedList();
void insert(LinkedList* list, int data);
void removeFirst(LinkedList* list);
void print(LinkedList* list);
void clear(LinkedList* list);

#endif
