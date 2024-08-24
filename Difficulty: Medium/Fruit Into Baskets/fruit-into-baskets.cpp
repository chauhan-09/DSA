//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(vector<int> &arr) {
        
        int n = arr.size() , i = 0 , j = 0 , maxi = 0;
        unordered_map<int,int> m;
        if(n == 1) return 1;
        
        while(i<n)
        {
            m[arr[i]]++;
            int cnt = 0;
            
            if(m.size() == 2)
            {
                for(auto it : m) cnt += it.second;
                maxi = max(maxi,cnt);
            }
            else if(m.size() > 2)
            {
                while(j<i && m.size() > 2)
                {
                    m[arr[j]]--;
                    if(m[arr[j]] == 0) m.erase(arr[j]);
                    j++;
                }
            }
            
            i++;
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalFruits(arr);

        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends