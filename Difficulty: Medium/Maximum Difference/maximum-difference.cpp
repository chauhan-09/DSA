//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        
        int n = arr.size() , maxi = -1;
        vector<int> left(n) , right(n);
        stack<int> s;
        
        for(int i=0;i<n;i++)
        {
            if(s.size() == 0) 
            {
                s.push(arr[i]);
                left[i] = 0;
            }
            else 
            {
                while(s.size() > 0 && arr[i] <= s.top())
                {
                    s.pop();
                }
                
                if(s.size() > 0) left[i] = s.top();
                else left[i] = 0;
                
                s.push(arr[i]);
            }
        }
        
        stack<int> s2;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s2.size() == 0) 
            {
                s2.push(arr[i]);
                right[i] = 0;
            }
            else 
            {
                while(s2.size() > 0 && arr[i] <= s2.top())
                {
                    s2.pop();
                }
                
                if(s2.size() > 0) right[i] = s2.top();
                else right[i] = 0;
                
                s2.push(arr[i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,abs(right[i] - left[i]));
        }
        
        return maxi;
        
        
        
          
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends