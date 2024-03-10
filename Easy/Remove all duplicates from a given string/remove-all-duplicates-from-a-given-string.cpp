//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) 
	{
	 unordered_map<char,int> m(52);
	 string ans = "";
	 
	 for(int i=0;i<str.length();i++)
	 {
	     m[str[i]]++;
	     
	     if(m[str[i]] == 1)
	      ans += str[i];
	 }
	 
	 return ans;
	 
	 
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends