#include<iostream>
#include<map>
using namespace std;

int main(){
    //All keys are unique and one key will point to one value only.1 value can have 2 keys,but one key cannot have 2 values.
    //sorted in map
    map<int,string> m;
    m[1]="babbar";
    m[13]="love";
    m[2]="kumar";
    m.insert({5,"bheem"});

    cout<<"Before erasing: "<<endl;
    for(auto i:m){
       cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13: "<<m.count(13)<<endl;
    m.erase(13);
    cout<<"After erasing: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //Implemented using red-black trees,so takes time of O(log n),but in unordered maps implementation is using hashmaps,so time is O(n).
    return 0;
}