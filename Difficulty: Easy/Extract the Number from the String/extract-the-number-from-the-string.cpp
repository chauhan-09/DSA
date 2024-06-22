//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) 
    {
         int n = s.length() , i = 0;
         long long num = 0 , maxi = -1;
         
        while(i<n)
        {
           bool flag = true;
           num = 0;
           if(isalpha(s[i]) || s[i] == ' ') 
           {
               i++;
               continue;
           }
           
           while(i<n && s[i] != ' ')
           {
               if(s[i] - '0' == 9) flag = false;
               num = (s[i] - '0') + (num * 10);
               i++;
           }
           
           if(flag) maxi = max(maxi,num);
           i++;
        }
        
        if(maxi > -1) return maxi;
        else return -1;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends