//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int mini = INT_MAX , ans = 0 , ans2 = 0 , s = 0 , e = n - 1 , mid = (s+e)/2;
        
        while(s<=e)
        {
            mid = (s+e)/2;
            
            if(abs(k-arr[mid]) < mini)
            {
                mini = abs(k-arr[mid]);
                ans = arr[mid];
            }
            else if(abs(k-arr[mid]) ==  mini){
                ans = max(ans,arr[mid]);
            }
           
            if(arr[mid] > k) e = mid - 1;
            else s = mid + 1;
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends