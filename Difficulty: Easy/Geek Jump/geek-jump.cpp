//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int solve(vector<int> &arr,int i,vector<int> &dp)
    {
        if(i >= arr.size()-1) return 0;
        int one_step = INT_MAX , two_step = INT_MAX;
        if(dp[i] != -1) return dp[i];
        
        if(i < arr.size()-1) one_step = abs(arr[i] - arr[i+1]) + solve(arr,i+1,dp);
        if(i < arr.size()-2) two_step = abs(arr[i] - arr[i+2]) + solve(arr,i+2,dp);
        
        return dp[i] = min(one_step,two_step);
    }
    
    
    int minimumEnergy(vector<int>& arr, int n) {
        
        vector<int> dp(n,-1);
        return solve(arr,0,dp);
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