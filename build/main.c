#include <stdio.h>
#include <LinkedList.h>
#include <Stack.h>

int main()
{
    LinkedList *arrList = createLinkedList();
    insert(arrList, 0);
    insert(arrList, 1);
    insert(arrList, 2);
    insert(arrList, 3);
    add(arrList, 43);
    print(arrList);
    clear(arrList);
    printf("\n################--Stack--################");


    Stack *stack = createStack();
    push(stack, 11);
    push(stack, 22);
    push(stack, 33);
    push(stack, 44);
    push(stack, 55);

    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));
    
    freeStack(stack);
    return 0;
}
