#include <stdio.h>
#include <stdlib.h>
#include <Stack.h>


int main()
{
    Stack* stack = createStack();
    push(stack, 33);
    push(stack, 3223);
    push(stack, 11);
    
    printf("Top of the stack: %d\n", peek(stack));
    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));

    freeStack(stack);
    return 0;
}