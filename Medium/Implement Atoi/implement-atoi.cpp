//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) 
    {
        int n = s.length();
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            char ch = s[i];
            int val = ch - '0';
            
            if(ch == '-' && i == 0)
            continue;
            
            if(val <= 9 && val >= 0)
            {
               ans  = ans * 10 + val; 
            }
            else return -1;
             
        }
        
        if(s[0] == '-') return ans * -1;
        else return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends