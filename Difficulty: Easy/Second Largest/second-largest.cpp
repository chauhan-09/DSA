//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    
    int second(int arr[] , int n , int lar , int sl , int indx)
    {
        if(indx >= n) return sl;
        
        if(arr[indx] > lar) 
        {
            sl = lar;
            lar = arr[indx];
        }
        else if(arr[indx] > sl && arr[indx] != lar) sl = arr[indx];
        
        second(arr,n,lar,sl,indx+1);
    }
    
    int print2largest(int arr[], int n) 
    {
        int lar = arr[0];
        int sl = -1;
        int val = second(arr,n,lar,sl,0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends