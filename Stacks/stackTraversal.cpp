#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(2);
    s.push(9);
    s.push(63);
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    s.push(2);
    s.push(9);
    s.push(63);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}