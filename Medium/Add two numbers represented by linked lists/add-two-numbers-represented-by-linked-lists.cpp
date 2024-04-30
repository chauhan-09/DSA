//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        while(num1 != NULL)
        {
           if(num1->data != 0) break;
           else num1 = num1 -> next;
        } 
        
        while(num2 != NULL)
        {
           if(num2->data != 0) break;
           else num2 = num2 -> next;
        } 
        
        if(num1 == NULL && num2 == NULL)
        {
            Node* newnode = new Node(0);
            newnode->next = NULL;
            return newnode;
        }
        
        Node* prev = NULL;
        Node* curr = num1;
        Node* fwd = NULL;
        
        while(curr != NULL)
        {
           fwd = curr -> next;
           curr -> next = prev;
           
           prev = curr;
           curr = fwd;
        }
        
        Node* head1 = prev;
        
        prev = NULL;
        curr = num2;
        fwd = NULL;
        
        while(curr != NULL)
        {
           fwd = curr -> next;
           curr -> next = prev;
           
           prev = curr;
           curr = fwd;
        }
        
        Node* head2 = prev;

        Node* dummy = new Node(-1);
        dummy->next = NULL;
        Node* temp = dummy;
        int carry = 0 , sum = 0;
        
        while(head1 != NULL || head2 != NULL || carry != 0)
        {
            sum = carry;
    
            if(head1 != NULL)
            {
                sum += head1->data;
                head1 = head1 -> next;
            }
            
            if(head2 != NULL)
            {
                sum += head2->data;
                head2 = head2->next;
            }
            
            carry = sum / 10;
            sum = sum % 10;
            
            Node* newnode = new Node(sum);
            newnode->next = NULL;
            temp->next = newnode;
            temp = newnode;
        }
        
        prev = NULL;
        fwd = NULL;
        curr = dummy->next;
        
        while(curr != NULL)
        {
            fwd = curr ->next;
            curr -> next = prev;
            
            prev = curr;
            curr = fwd;
        }
        
        return prev;
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends