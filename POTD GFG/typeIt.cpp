//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        if(s.size() <= 3)
            return s.size();
        int ans = INT_MAX;
        string str = "";
        for(int i=0; i<s.size(); i++){
            str = str + s[i];
            string temp = s.substr(i+1, str.size());
            if(temp == str){
                int ctr = str.size() + 1 + (s.size() - str.size()*2);
                ans = min(ans, ctr);
            }
        }
        return (ans==INT_MAX)? s.size(): ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends