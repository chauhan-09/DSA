//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        
        map<int,int> m;
        int n = arr.size();
        for(int i=0;i<n;i++) m[arr[i]]++;
        vector<pair<int,int>> ans;
        vector<int> store , res(n);
        
        for(auto it : m)
        {
            pair<int,int> p;
            p.first = it.second;
            p.second = it.first;
            ans.push_back(p);
        }
        
        sort(ans.rbegin(),ans.rend());
        int indx = 0;
        
        for(int i=0;i<ans.size();i++)
        {
            if(i < ans.size() - 1 && ans[i].first == ans[i+1].first)
            {
                store.push_back(ans[i].second);
            }
            else 
            {
                store.push_back(ans[i].second);
                int freq = ans[i].first , j = store.size() - 1;
                while(j>=0)
                {
                    freq = ans[i].first;
                    while(freq-- && j >= 0)
                    {
                        res[indx++] = store[j];
                    }
                    
                    if(j < 0) break;
                    store.pop_back();
                    j--;
                }
            }
        }
        
        return res;
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
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends