//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        
        int n = arr.size();
        priority_queue<long long , vector<long long> , greater<long long>> pq;
        long long sum = 0 , cnt = 0;
        if(n == 1) return 0;
        
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        
        while(pq.size() > 1)
        {
            long long val1 = 0 , val2 = 0;
            
            val1 += pq.top();
            pq.pop();
            val2 += pq.top();
            pq.pop();
            
            sum = val1 + val2;
            cnt += sum;
            pq.push(sum);
        }
        
        return cnt;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends