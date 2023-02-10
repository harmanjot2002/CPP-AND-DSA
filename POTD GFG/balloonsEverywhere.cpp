//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)  mp[s[i]]++; 
        int a=INT_MAX;
        a=min(mp['b'],min(mp['a'],min(mp['n'],min(mp['l']/2, mp['o']/2))));
        return a;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends