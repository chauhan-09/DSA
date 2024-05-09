//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool divisorGame(int n) {
        
        int cnt1 = 0 , cnt2 = 0;
        
        if(n%2 == 0) return 1;
        else return 0;
        
        /* while(n > 1)
        {
           int i = n - 1;
           for(; i > 0 ; i--)
           {
               if(n % i == 0) break;
           }
           
           n = n - i;
           
           if(cnt1 % 2 == 0)
           {
               cnt1++;
           }
           else cnt2++;
        }
        
        if(cnt1 > cnt2) return 1;
        else return 0;
        
        */
        
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
        bool ans = obj.divisorGame(n);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends