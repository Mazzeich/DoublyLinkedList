#include <doublylinkedlist.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
}

void DoublyLinkedList::IsEmpty()
{
    if (head == nullptr) cout << "List is empty." << endl;
    else cout << "List is not empty." << endl;
}

void DoublyLinkedList::Insert(int x)
{
    Node *temp = new Node;
    temp->next = nullptr;
    temp->x = x;

    if (head != nullptr)
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
    else
    {
        temp->prev = nullptr;
        head = tail = temp;
    }
}

void DoublyLinkedList::Show()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->x << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void DoublyLinkedList::DeleteFirstElement()
{
    Node *temp;
    Node *current = tail;
    current = head;
    temp = head->next;
    delete current;
    head = temp;
    temp->prev = nullptr;
}

DoublyLinkedList::~DoublyLinkedList()
{
    while(head)
    {
        tail = head->next;
        delete head;
        head = tail;
    }
}
