#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }
}

int main(){
    fun(5);   
    return 0;
}