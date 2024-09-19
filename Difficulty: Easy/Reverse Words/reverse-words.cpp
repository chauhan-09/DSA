//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string s) {
        
        int n = s.length(),i=n-1,j=n-1;
        string ans = "";
        
        while(i>=0)
        {
            while(i>=0 && s[i] != '.') i--;
            
            ans += s.substr(i+1,j-i) + '.';
            
            i--;
            j=i;
        }
        
        ans.pop_back();
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends