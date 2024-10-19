#ifndef STACK_H
#define STACK_H

typedef struct StackNode{
    int data;
    struct StackNode* next;
}StackNode;

typedef struct Stack{
    StackNode *top;
}Stack;


Stack *createStack();
void push(Stack *stack, int data);
int pop(Stack *stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
void freeStack(Stack* stack);


#endif