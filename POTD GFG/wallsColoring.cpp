//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
vector<vector<int>>dp;
int solve(vector<vector<int>>&colors, int i, int prev)
{
    if(i<0)return 0;
    
    if(dp[i][prev]!=-1)return dp[i][prev];
    
    int ans=INT_MAX;
    
    if(prev==0)
    {
        ans=min(ans,solve(colors,i-1,1)+colors[i][1]);
        ans=min(ans,solve(colors,i-1,2)+colors[i][2]);
    }
    if(prev==1)
    {
        ans=min(ans,solve(colors,i-1,0)+colors[i][0]);
        ans=min(ans,solve(colors,i-1,2)+colors[i][2]);
    }
    
    if(prev==2)
    {
        ans=min(ans,solve(colors,i-1,0)+colors[i][0]);
        ans=min(ans,solve(colors,i-1,1)+colors[i][1]);
    }
    
    return dp[i][prev]=ans;
}
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        dp=vector<vector<int>>(N,vector<int>(3,-1));
        int ans=INT_MAX;
        ans=min(ans,solve(colors,N-2,0)+colors[N-1][0]);
        ans=min(ans,solve(colors,N-2,1)+colors[N-1][1]);
        ans=min(ans,solve(colors,N-2,2)+colors[N-1][2]);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends