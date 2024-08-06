//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string s) 
    {
        int n = s.length() , i = 0 , j = 0 , dot = 0;
        
        if(s[0] == '.') return 0;
        
        while(i<n-1)
        {
            if(s[i] == '.' && s[i+1] == '.') return 0;
            if(s[i] == '.') dot++;
            i++;
        }
        
        if(dot > 3 || dot < 3) return 0;
        
        i = 0;
        
        while(i<n)
        {
            if(i < n-1 && s[i] == '0' && s[i+1] != '.') return 0;
            while(i<n && s[i] != '.') i++;
            
            if(i>=n) break;
            
            long long num = stoi(s.substr(j,i-j+1));
            
            if(num > 255) return 0;
            i++;
            j = i;
        }
        
        if(stoi(s.substr(j,i-j+1)) > 255) return 0;
        else return 1;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends