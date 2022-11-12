#include <bits/stdc++.h>
using namespace std;

int evalPost(string str){
    stack<int>s;
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(c<='9' && c>='0'){
            s.push(c-48);
        }
        else{
            int ans=s.top();
            s.pop();
            if(c=='^'){
                int cal=(s.top())^ans;
                s.pop();
                s.push(cal);
            }
            else  if(c=='+'){
                int cal=(s.top())+ans;
                s.pop();
                s.push(cal);
            }
            else  if(c=='*'){
                int cal=(s.top())*ans;
                s.pop();
                s.push(cal);
            }
            else  if(c=='/'){
                int cal=(s.top())/ans;
                s.pop();
                s.push(cal);
            }
            else  if(c=='-'){
                int cal=(s.top())-ans;
                s.pop();
                s.push(cal);
            }
        }
    }
    return s.top();
}

int main(){
    string str = "96*9+66*+4+2-76*-8-67*2/8*+6+45/+1+75*1/+4+57/2/9*+29/+6-58/-4+3-4+74*-2-26/1*-3-94/1*8/+2+14*+7+6+78/+32/+92*+3-28*+15/-1-8-9+65*+4+1-39*6/-73*+56*1*+76/-7+12*2*-2-56/8/1*1/+82*+5+52/8*+23*+39*-1+74*-63/8/+24*4/3/3/1*8*+5-4-44/8/9*+2+9-5+61*+2+8+5+4+2-61*7/+86*+2+6+87*4*+4+89*2*3/-52*+82/1/3/6/-2-69*-14*-1+29*7/7*-2+5+48*-43/+32/8/7*3/+9+41*-1-9+32*+44/1/+4+42*+7-8+21*1/+95/+9+5+9+9+12/2/1*5*-55*9/-7+9-34/+93/1/-9-7+68/-7+74*4/2/+57*+4+87/7*-22/+4-2+4+17*+1+5+4+49/-";
    cout << evalPost(str) << endl;
    return 0;
}