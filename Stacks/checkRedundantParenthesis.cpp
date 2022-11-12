#include<bits/stdc++.h>
using namespace std;

bool checkRedundantParenthesis(string str){
    stack<char> st;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            if(st.top()=='('){
                return true;
            }
            while(st.top()=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/'){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}

int main(){
    cout<<"Enter string to be checked: "<<endl;
    string s;
    cin>>s;
    cout<<checkRedundantParenthesis(s);
    return 0;
}


//((a+b))
//1