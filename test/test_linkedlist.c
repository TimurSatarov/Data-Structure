#include <stdio.h>
#include "LinkedList.h"

int main() {
    LinkedList* list = createLinkedList();
    if (!list) {
        return 1;
    }

    insert(list, 10);
    insert(list, 20);
    insert(list, 30);
    
    printf("Linked List: ");
    print(list);

    removeFirst(list);
    printf("After removing first element: ");
    print(list);

    clear(list);

    return 0;
}
