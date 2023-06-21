#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* ans = new Node<int>(0);
    Node<int>* dup = ans;
    while(first!= NULL && second!=NULL)
    {
        if(first->data <= second->data)
        {
           Node<int>*temp = new Node<int>(first->data);
           dup->next = temp;
           dup = dup->next;
           first = first->next; 
        }
        else
        {
           Node<int>*temp = new Node<int>(second->data);
           dup->next = temp;
           dup= dup->next;
           second = second->next; 
        }
    }
    while(first!=NULL)
    {
        Node<int>*temp = new Node<int>(first->data);
        dup->next = temp;
        dup = dup->next;
        first = first->next;
    }
    while(second!=NULL)
    {
        Node<int>*temp = new Node<int>(second->data);
        dup->next = temp;
        dup= dup->next;
        second = second->next; 
    }
    return ans->next;
}
