#include <stdio.h>
#include <stdlib.h>
#include <Stack.h>


Stack* createStack(){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack -> top = NULL;
    return stack;
}
// Push element onto the stack
void push(Stack* stack, int data){
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    newNode -> data = data;
    newNode -> next = stack -> top;
    stack -> top = newNode;
}
// Check if the stack is empty
int isEmpty(Stack* stack){
    return stack -> top == NULL;
}
// pop an element from the stack
int pop(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack underflow!\n");
        return -1;
    }
    StackNode *temp = stack -> top;
    int data = temp -> data;
    stack -> top = stack -> top -> next;
    free(temp);
    return data;
}

// peek the top element of the stack
int peek(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is empty!\n");
        return -1;

    }
    return stack -> top -> data;

}

void freeStack(Stack* stack){
    while(!isEmpty(stack)){
        pop(stack);
    }
    free(stack);
}
