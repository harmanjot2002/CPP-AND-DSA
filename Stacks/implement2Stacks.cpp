#include<bits/stdc++.h>
using namespace std;

struct TwoStacks{
    int* arr,cap,top1,top2;
    TwoStacks(int c){
        cap=c;
        arr=new int[cap];                                                                                              
        top1=-1;
        top2=cap;
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
        else{
            cout<<"Overflow";
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
        else{
            cout<<"Overflow";
        }
    }
    int pop1(){
        if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;
        }
        else{
            cout<<"Underflow";
        }
    }
    int pop2(){
        if(top2<cap){
            int x=arr[top2];
            top2++;
            return x;
        }
        else{
            cout<<"Underflow";
        }
    }
};

int main(){
    TwoStacks s(7);
    s.push1(9);
    s.push1(8);
    s.push2(8);
    s.push2(4);
    cout<<s.pop1();
    cout<<s.pop2();
    cout<<s.pop1();
    s.push1(2);
    s.push1(3);
    s.push2(6);
    return 0;
}