//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    pair<int,int> p;
    int ans1 = -1 , ans2 = INT_MAX;
    
    for(int i=0;i<n;i++)
    {
       if(arr[i] <= x) ans1 = max(ans1,arr[i]);
       if(arr[i] >= x) ans2 = min(ans2,arr[i]);
    }
    
    p.first = ans1;
    if(ans2 == INT_MAX) p.second = -1;
    else p.second = ans2;
    return p;
}