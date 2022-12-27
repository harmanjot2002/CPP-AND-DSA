//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
#define ll long long
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        vector<ll>ans;
        for(int i=0;i<63 && (1<<i)<=r;i++){
            for(int j=i+1;j<63 && (1<<j)<=r;j++){
                for(int k=j+1;k<63 && (1<<k)<=r;k++){
                    ll temp=pow(2,i)+pow(2,j)+pow(2,k);
                    ans.push_back(temp);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return (upper_bound(ans.begin(),ans.end(),r)-lower_bound(ans.begin(),ans.end(),l));
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends