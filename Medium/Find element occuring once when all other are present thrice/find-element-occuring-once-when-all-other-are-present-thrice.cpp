//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) 
    {
        unordered_map<int,int> m; 
        
        for(int i=0;i<N;i++)
          m[arr[i]]++;
          
        for(auto it: m)   //find the time complexity of this loop
        {
            if(it.second == 1)
            return it.first;
        }
        
        return -1;
        
        //TC ----> O(N) + O(N)
        //SC ----> O(N)
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends