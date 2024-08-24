//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        
        int n = arr.size() , i = 1 , j = n-2, sum1 = arr[0] , sum2 = arr[n-1];
        if(n == 1) return false;
        
        while(i<j)
        {
            if(sum1 < sum2)
            {
                while(i<j && sum2 > sum1)
                {
                    sum1 += arr[i];
                    i++;
                }
            }
            else if(sum1 > sum2)
            {
                while(j>i && sum1 > sum2)
                {
                    sum2 += arr[j];
                    j--;
                }
            }
            else 
            {
                sum1 += arr[i];
                sum2 += arr[j];
                i++;
                j--;
            }
        }
        
        if(i == j && sum1+arr[i] == sum2 || sum2+arr[j] == sum1) return true;
        else if(i != j && sum1 == sum2) return true;
        else return false;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends