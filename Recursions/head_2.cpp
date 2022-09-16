#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n<<" ";
    }
}

int main(){
    fun(5);     
    return 0;
}