//{ Driver Code Starts
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        
        if(head->next == NULL) return true;
        
        Node* temp = head;
        int cnt = 0;
        while(temp != NULL)
        {                           
            temp = temp->next;  //1 2 1 2 1
            cnt++;
        }
        
        int len = 0;
        if(cnt % 2 == 0) len += cnt/2;
        else len = cnt/2 + 1;
        
        cnt = 0;
        temp = head;
        
        while(cnt < len)
        {
            temp = temp -> next;
            cnt++;
        }
        
        //if(cnt % 2 == 0) 
        Node* curr = temp;
        Node* prev = NULL;
        Node* fwd = NULL;
        
        
        while(curr != NULL)
        {
            fwd = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = fwd;
        }
        
        temp = head;
        
        while(prev != NULL)
        {
            if(temp->data != prev->data) return false;
            temp = temp -> next;
            prev = prev -> next;
        }
        
        
        return true;
        
        
        
    }
};


//{ Driver Code Starts.

/* Function to print nodes in a given linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

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
            cout << "empty" << endl;
            continue;
        }

        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        if (ob.isPalindrome(head))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        // Clean up the remaining nodes to avoid memory leaks
        while (head != NULL) {
            struct Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    return 0;
}

// } Driver Code Ends