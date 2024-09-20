//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int dp[10001];
    
    int solve(vector<int> &arr,int i,int k)
    {
        if(i >= arr.size()-1) return 0;
        
        if(dp[i] != -1) return dp[i];
        
        int cost = INT_MAX , mini = INT_MAX;
        
        for(int j=1;j<=k;j++)
        {
            if(i+j < arr.size())
            {
                cost = abs(arr[i] - arr[i+j]) + solve(arr,i+j,k);
                mini = min(mini,cost);
            }
        }
        
        return dp[i] = mini;
    }
    int minimizeCost(vector<int>& arr, int& k) {
        
        memset(dp,-1,sizeof(dp));
        return solve(arr,0,k);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(arr, k);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends