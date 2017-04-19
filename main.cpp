#include <stdlib.h>
#include <iostream>
#include <doublylinkedlist.h>

int main()
{
    DoublyLinkedList list;
    list.IsEmpty();
    list.Insert(2);
    list.Insert(3);
    list.Insert(5);
    list.Insert(2);
    list.Insert(1);
    list.Show();
    list.IsEmpty();
    list.DeleteFirstElement();
    list.IsEmpty();
    list.Show();
    system("PAUSE");
}
