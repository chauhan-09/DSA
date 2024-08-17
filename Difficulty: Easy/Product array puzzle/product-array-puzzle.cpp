//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr) {
        
        int n = arr.size();
        vector<long long> left(n) , right(n);
        left[0] = 1;
        right[n-1] = 1;
        long long mul = 1;
        
        for(int i=1;i<n;i++)
        {
            mul *= arr[i-1];
            left[i] = mul;
        }
        
        mul = 1;
        
        for(int i=n-2;i>=0;i--)
        {
            mul *= arr[i+1];
            right[i] = mul;
        }
        
        for(int i=0;i<n;i++)
        {
            if(i == 0) arr[i] = right[0];
            else if(i == n-1) arr[i] = left[n-1];
            else arr[i] = left[i] * right[i];
        }
        
        return arr;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends