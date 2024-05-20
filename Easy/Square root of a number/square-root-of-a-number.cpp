//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int s = 0 , e = x - 1 , ans = 1;
        long long mul = 1;
        
        while(s<=e)
        {
            long long int mid = (s+e)/2;
            mul = mid*mid;
            
            if(mul == x)
            {
                return mid;
            }
            
            if(mul > x)
            {
                e = mid - 1;
            }
            else if(mul < x)
            {
               ans = max(ans,mid);
               s = mid + 1;
            }
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends