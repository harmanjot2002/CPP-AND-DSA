#include<bits/stdc++.h>
using namespace std;

int pow(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}

int main(){
    cout<<pow(2,5);     
    return 0;
}