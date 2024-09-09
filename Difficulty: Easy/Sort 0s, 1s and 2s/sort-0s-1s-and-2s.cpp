//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int cnt0 = 0 ,  cnt1 = 0 , cnt2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0) cnt0++;
            else if(arr[i] == 1) cnt1++;
            else cnt2++;
        }
        
        int indx = 0;
        for(int i=0;i<cnt0;i++)
        {
            arr[indx++] = 0;
        }
        
        for(int i=0;i<cnt1;i++)
        {
            arr[indx++] = 1;
        }
        
        for(int i=0;i<cnt2;i++)
        {
            arr[indx++] = 2;
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends