//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) 
    {
        vector<int> ans(26);
        int n = s.length();
        
        if(n < 26) return false;
        
        for(int i=0;i<n;i++)
        { 
            char ch = tolower(s[i]);
            int val = ch - 'a';
            
            if(val >= 0 && val <= 25)  ans[val]++;
        }
        
        for(int i=0;i<ans.size();i++)
        {
           if(ans[i] == 0) return false;
        }
        
        return true;
        
        
        
        
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends