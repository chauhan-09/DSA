//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int jump(vector<int> &arr,vector<int> &dp , int n , int indx)
    {
        if(indx >= n-1) return 0;
        
        if(dp[indx] != -1) return dp[indx];
        
        int one_step;
        one_step = jump(arr,dp,n,indx+1) + abs(arr[indx] - arr[indx+1]);
        int two_step = INT_MAX;
        if(indx < n-2) two_step = jump(arr,dp,n,indx+2) + abs(arr[indx] - arr[indx+2]);
        
        return dp[indx] = min(one_step,two_step);
    }
    
    int minimumEnergy(vector<int>& arr , int n) 
    {
       vector<int> dp(n,-1);
       return jump(arr,dp,n,0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends