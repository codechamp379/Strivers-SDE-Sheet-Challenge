#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) 
{
    // Write your code here.
    LinkedListNode<int> *curr = node;
    LinkedListNode<int> *upnext;
    upnext = curr->next;
    curr->data = upnext->data;
    curr->next = upnext->next;
}