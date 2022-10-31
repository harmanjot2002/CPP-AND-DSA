#include<iostream>
#include<vector>

using namespace std;

int main(){
     //Vectors:Agar purana vector fill hogya,toh nya vector bnake purana vla delete ho jayega apne aap.
    vector<int> v;
    vector<int> a(5,1);
    //copy elements of vector "a" in "last".
    vector<int> last(a);

    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl; 

    cout<<"Size "<<v.size()<<endl;

    cout<<"Element at 2nd Index "<<v.at(2)<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"Before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //On clearing,size(no. of elements present) becomes zero,but capacity(memory allocated) is still same.
    cout<<"Size Before clear "<<v.size()<<endl;
    v.clear();
    cout<<"Size After clear "<<v.size()<<endl;
    return 0;
}