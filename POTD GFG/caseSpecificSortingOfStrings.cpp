//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int nn)
    {
        vector<char> a;
        vector<char> b;
        for(int i=0;i<str.size();i++){
            if(int(str[i])>=97){
                a.push_back(str[i]);
            }
            else{
                b.push_back(str[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m=0;
        int n=0;
        for(int i=0;i<str.size();i++){
            if(int(str[i])>=97){
                str[i]=a[m];
                m++;
            }
            else{
                str[i]=b[n];
                n++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends