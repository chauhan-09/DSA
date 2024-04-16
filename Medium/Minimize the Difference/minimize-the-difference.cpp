//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        
        vector<int> mini(n) , maxi(n) , mini2(n) , maxi2(n) ;
        int mn = INT_MAX , mx = 0 , i = 0;
        
        for(i = n - 1; i>= 0 ; i--)
        {
            mx = max(mx,arr[i]);
            mn = min(mn,arr[i]);
            
            maxi[i] = mx;
            mini[i] = mn;
        }
        
        mx = 0 , mn = INT_MAX;
        
        for(i = 0 ; i<n;i++)
        {
            mx = max(mx,arr[i]);
            mn = min(mn,arr[i]);
            
            maxi2[i] = mx;
            mini2[i] = mn;
        }
        
        i = k;
        int ans = INT_MAX , j = 0 , tmin = 0 , tmax = 0;
        if( i >= n) return 0;
        ans = maxi[i] - mini[i];
        i++;
        
        while(i<n && j<n) 
        {
            tmin = min(mini[i],mini2[j]);
            tmax = max(maxi[i],maxi2[j]);
            ans = min(ans,tmax - tmin);
            i++;
            j++;
        }
        
        if(j < n)
        ans = min(ans,maxi2[j] - mini2[j]);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends