/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
        Node* curr1=num1;
        Node* curr2=num2;
        Node* curr = new Node(0);
        Node* ans = curr;
        int rem=0,val1,val2;

        while(curr1 != NULL || curr2 != NULL)
        {
           if(curr1 != NULL)
               val1 = curr1->data; 
            else
               val1 = 0;
            if(curr2!=NULL)
               val2 = curr2->data;
            else
               val2 = 0;
            ans->next = new Node((val1+val2+rem)%10);
            ans = ans->next;
            rem = (val1+val2+rem)/10;
            if(curr1 != NULL)
               curr1 = curr1->next;
            if(curr2 != NULL)
               curr2 = curr2->next;
        }
        if(rem==1)
          ans->next = new Node(1);
        return curr->next;
}
