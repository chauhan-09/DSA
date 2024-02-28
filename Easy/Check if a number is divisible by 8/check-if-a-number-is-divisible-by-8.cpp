//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s)
    {
       int n = s.length();
       string str = "";
       
       if(n == 1)
       {
          str += s[n-1];
          
          int num = stoi(str);
         
          if(num % 8 == 0) return 1;
          else return -1;
       }
       else if(n == 2)
       {
          str += s[n-2];
          str += s[n-1];
           
          int num = stoi(str);
          
          if(num % 8 == 0) return 1;
          else return -1;
       }
     
       str += s[n-3];
       str += s[n-2];
       str += s[n-1];
          
       int num = stoi(str);
       
       if(num % 8 == 0) return 1;
       else return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends