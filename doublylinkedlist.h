#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

struct Node
 {
     int x;
     Node *next,*prev;
 };

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;
    Node *curr;
public:
    DoublyLinkedList();
    void IsEmpty();
    void Insert(int x);
    void DeleteFirstElement();
    void Show();
    ~DoublyLinkedList();
};

#endif // DOUBLYLINKEDLIST_H
