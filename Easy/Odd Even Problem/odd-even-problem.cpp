//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        
        int x = 0 , y = 0 , n = s.length();
        unordered_map<char,int> m(26);
        
        for(int i=0;i<n;i++) m[s[i]]++;
        
        for(int i=0;i<n;i++)
        {
            int val = (s[i] - 'a') + 1;
            
            if(val%2 == 0)
            {
                if(m[s[i]] % 2 == 0) 
                {
                    m[s[i]] = 1;
                    x++;
                }
            }
            else 
            {
                if(m[s[i]] % 2 != 0) {
                    m[s[i]] = 0;
                    y++;
                }
            }
        }
        
        if((x+y)%2 == 0) return "EVEN";
        else return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends