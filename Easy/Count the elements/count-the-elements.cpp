//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        
        vector<int> ans;
        sort(b.begin(),b.end());
         
        for(int i = 0 ; i < q ; i++)
        {
            int el = a[query[i]];
            int cnt = 0;
            
            int s = 0 ;
            int e = n - 1;
            int mid = (s+e) / 2;
            
            while(s <= e)
            {
                if(b[mid] <= el) s = mid + 1;
                 
                if(b[mid] > el) e = mid - 1;
                
                
                mid = (s+e) / 2;
            }
          
            ans.push_back(e + 1);
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
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends