#include <stdio.h>
#include <LinkedList.h>

int main(int argc, char const *argv[])
{
    LinkedList *arrList = createLinkedList();
    insert(arrList, 0);
    insert(arrList, 1);
    insert(arrList, 2);
    insert(arrList, 3);
    add(arrList, 43);
    print(arrList);
    return 0;
}
