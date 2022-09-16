#include<bits/stdc++.h>
using namespace std;

int e(int x,int n){
    static int s=1;
    if(n==0)
        return s;
    s=1+n/x*s;
    return e(x,n-1);
}

int main(){
     
    return 0;
}