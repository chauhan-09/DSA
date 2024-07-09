//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int x) 
    {
        int maxi = 0 , diff = INT_MAX , n = arr.size();
        
        for(int i=0;i<=n-3;i++)
        {
           int sum1 = arr[i];
           for(int j=i+1;j<=n-2;j++)
           {
               int sum2 = sum1 + arr[j];
               for(int k=j+1;k<n;k++)
               {
                   int sum3 = sum2 + arr[k];
                   if(sum3 == x) return sum3;
                   int dif = abs(sum3 - x);
                   
                   if(dif < diff)
                   {
                       diff = dif;
                       maxi = sum3;
                   }
                   else if(dif == diff) maxi = max(maxi,sum3);
               }
           }
        }
        
        return maxi;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends