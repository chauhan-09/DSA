//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) 
    {
        int first = 0;
        int second = 1;
        int third = 1;
        int mod = 1e9 + 7;
        vector<int> ans;
        
        if(n == 1) return {0,1};
        else if(n == 2) return {0,1,1};
        else if(n == 3) return {0,1,1,2};
        
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(1);
        
          for(int i=3;i<=n;i++)
        {
            first = second;
            second = third;
            third = (first + second) % mod;
            ans.push_back(third);

        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends