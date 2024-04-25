//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        
        int sum = 0 , maxi = 0;
        
        if(n <= 2 || m <= 2) return -1;
        
        for(int i = 0 ; i < n - 2 ; i++) // for row
        {
            int j = 0 ,  sum = 0 , k = 0;
            while( m - k > 2) //for col
            {
                
            int cnt = 0 , sum = 0;
            j = k;
            while(cnt < 3)
            {
                sum += mat[i][j];
                sum += mat[i+2][j];
                j++;
                cnt++;
            }
            
            sum += mat[i+1][k+1];
            maxi = max(maxi,sum);
            k++;
            }
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends