//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& arr) {
     
     
       int n = arr.size() , m = arr[0].size() , cnt = 0;
       
       for(int i=0;i<n;i++)
       {
           bool top = true , bottom = true , left = true , right = true;
           for(int j=0;j<m;j++)
           {
              if(arr[i][j] == 1) 
              {
                  top = true , bottom = true , left = true , right = true;
                  continue;
              }
              if(i == 0) top = false;
              if(j == 0) left = false;
              if(i == n-1) bottom = false;
              if(j == m-1) right = false;
              
              if(top)
              {
                  if(arr[i-1][j] == 1) cnt++;
              }
              
              if(bottom)
              {
                  if(arr[i+1][j] == 1) cnt++;
              }
              
              if(left)
              {
                  if(arr[i][j-1] == 1) cnt++;
              }
              
              if(right)
              {
                  if(arr[i][j+1] == 1) cnt++;
              }
           }
       }
       
       return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends