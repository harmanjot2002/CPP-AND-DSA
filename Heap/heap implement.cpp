#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    int size;
    int capacity;
    int *arr;
    public:
    MinHeap(int c){
        capacity=c;
        arr=new int[c];
        size=0;
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
};

int main(){
    MinHeap h(11);
    return 0;
}