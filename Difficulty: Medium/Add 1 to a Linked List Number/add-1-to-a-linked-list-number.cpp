//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        
        Node* temp = head;
        
        while(temp->next != NULL) temp=temp->next;
        
        if(temp->data <= 8)
        {
            temp->data = temp->data + 1;
            return head;
        }
        
        Node* curr = head;
        Node* fwd = NULL;
        Node* prev = NULL;
        
        while(curr != NULL)
        {
            fwd = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = fwd;
        }
        
        Node *last = prev , *prev2 = NULL;
        temp->data = 0;
        temp=temp->next;
        int c = 1;
        while(temp != NULL)
        {
            int val = temp->data;
            val += c;
            
            if(val < 10) 
            {
                temp->data = val;
                c = 0;
            }
            
            c = val / 10;
            val = val % 10;
            
            temp->data = val;
            prev = prev->next;
            temp=temp->next;
        }
        
        curr = last , fwd = NULL , prev2 = NULL;
        
        while(curr != NULL)
        {
            fwd = curr->next;
            curr->next = prev2;
            
            prev2 = curr;
            curr = fwd;
        }
    
        if(c == 1)
        {
            Node* newnode = new Node(c);
            newnode->next = prev;
            prev = newnode;
        }
        else if(temp != NULL)
        {
            while(temp->next != NULL) temp=temp->next;
            
            prev = temp;
        }
        
        return prev;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends