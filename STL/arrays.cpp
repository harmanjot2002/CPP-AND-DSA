#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,4> a={1,2,3,4};
    //Traversal:
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //Array functions
    cout<<"Size of array is "<<a.size()<<endl;
    cout<<"Element at 2nd index(3rd position) is "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element is "<<a.front()<<endl;
    cout<<"Last element is "<<a.back()<<endl; 
    return 0;
}