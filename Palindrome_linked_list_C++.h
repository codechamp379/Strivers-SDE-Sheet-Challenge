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
LinkedListNode<int>* middle(LinkedListNode<int> *head)
{
   LinkedListNode<int> *slow = head;
   LinkedListNode<int> *fast = head;
   while(fast!=NULL && fast->next!=NULL)
   {
       slow = slow->next;
       fast = fast->next->next;
   }
   return slow; 
}

LinkedListNode<int>* reverse(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev = NULL;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *upnext;
    while(curr != NULL)
    {
        upnext = curr->next;
        curr->next = prev;
        prev = curr;
        curr = upnext;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) 
{
    // Write your code here.
    if(head==NULL || head->next==NULL)
       return true;
    LinkedListNode<int> *mid = middle(head);
    LinkedListNode<int> *curr1 = head;
    LinkedListNode<int> *curr2 = reverse(mid);
    while(curr2 != NULL)
    {
        if(curr1->data != curr2->data)
            return false;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;

}