//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int dp[100001] = {0};
    int solve(vector<int> &arr,int i)
    {
        if(i >= arr.size()-1) return 0;
        
        if(dp[i] != 0) return dp[i];
        
        int one_step = INT_MAX , two_step = INT_MAX;
        
        one_step = abs(arr[i] - arr[i+1]) + solve(arr,i+1);
        if(i < arr.size()-2) two_step = abs(arr[i] - arr[i+2]) + solve(arr,i+2);
        
        return dp[i] = min(one_step,two_step);
    }
    int minimumEnergy(vector<int>& arr, int n) {
        return solve(arr,0);
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