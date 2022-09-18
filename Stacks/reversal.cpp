#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> s){
    stack<int> st;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        int res = s.top();
        s.pop();
        st.push(res);
    }
    int isze = st.size();
    for (int i = 0; i < isze; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }    
}

void before(stack<int>s){
    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    } 
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Before reversal"<<endl;
    before(s);
    cout<<endl<<"After reversal"<<endl;
    reverseStack(s);
    return 0;
}