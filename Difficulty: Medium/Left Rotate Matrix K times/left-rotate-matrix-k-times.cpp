//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> arr) {
        
        int n = arr.size() , m = arr[0].size();
        
        for(int i=0;i<n;i++)
        {
            vector<int> temp(m);
            int indx = 0 , j = 0;
            k = k % m;
            
            for(j=0;j<m;j++) // 1 2 3
            {
                temp[indx++] = arr[i][j];
            }
            
            j = 0;
            
            for(int v=k;v<m;v++) arr[i][j++] = temp[v];
            for(int v=0;v<k;v++) arr[i][j++] = temp[v];
            
        }
        
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends