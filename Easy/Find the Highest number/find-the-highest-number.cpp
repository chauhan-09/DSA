//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        int n = arr.size() , maxi = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1])
            {
                maxi = max(maxi,arr[i]);
            }
            else 
            {
                maxi = max(maxi,arr[i+1]);
            }
        }
        
        return maxi;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends