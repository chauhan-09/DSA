//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int mod = 1e9 + 7;
    int dp[1001];
    
    long long recursive(int n,int i,int cnt,int k)
    {
       long long int pdt = 1;

       if(i > n)
       return 0;
      
       for(int indx = k ; indx < k + cnt ; indx++)
       {
           pdt = pdt * indx % mod;
       }
      
        return pdt + recursive(n,i+1,i+1,k+i) % mod;
    }
    
    
      long long sequence(int n){
        
        memset(dp,-1,sizeof(dp));
        return recursive(n,1,1,1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends