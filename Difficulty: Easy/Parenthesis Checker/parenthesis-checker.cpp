//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        int i = 0 , n = x.length();
        
        while(i<n)
        {
            char ch = x[i];
            if(ch == ']' && s.size() >= 1 && s.top() == '[') s.pop();
            else if(ch == '}' && s.size() >= 1 && s.top() == '{') s.pop();
            else if(ch == ')' && s.size() >= 1 && s.top() == '(') s.pop();
            else s.push(ch);
            i++;
        }
        
        if(s.size() == 0) return true;
        else return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends