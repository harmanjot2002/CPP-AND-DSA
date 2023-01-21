//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     int minVal(int a, int b) {
         
        int tempb=b;
        int bsetbits=0;
        while(tempb>0){
            if(tempb&1) bsetbits++;
            tempb>>=1;
        }
        int tempa=a;
        int asetbits=0;
        while(tempa>0){
            if(tempa&1) asetbits++;
            tempa>>=1;
        }
        if(asetbits==bsetbits){
            return a;
        }
        else if(asetbits>bsetbits){
            int ans=0;
            int rem=bsetbits;
            for(int i=31;i>=0;i--){
                if(a&(1<<i)){
                    ans|=(1<<i);
                    rem--;
                } 
                if(rem==0)
                    return ans;
            }
        }
        else{
            int rem=bsetbits-asetbits;
            int ans=a;
            for(int i=0;i<=31;i++){
                if((a&(1<<i))==0){
                    ans|=(1<<i);
                    rem--;
                } 
                if(rem==0) return ans;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends