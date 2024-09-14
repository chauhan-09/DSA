//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        
       int n = arr.size() , i = 0 , j = 0 , indx = 0;
       vector<int> pos , ngt;
       
       for(int i=0;i<n;i++)
       {
           if(arr[i] >= 0) pos.push_back(arr[i]);
           else ngt.push_back(arr[i]);
       }
       
       while(i<pos.size() && j<ngt.size())
       {
           arr[indx++] = pos[i++];
           arr[indx++] = ngt[j++];
       }
       
       while(i<pos.size()) arr[indx++] = pos[i++];
       while(j<ngt.size()) arr[indx++] = ngt[j++];
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends