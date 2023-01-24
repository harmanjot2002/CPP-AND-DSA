//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void convert(int arr[], int n) {
    	vector<int>v(arr,arr+n);
        sort(v.begin(),v.end());
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i]]=i;
        }
        for(int i=0;i<n;i++){
            arr[i]=m[arr[i]];
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends