#include <iostream>
#include <stack>
using namespace std;

// void span(int rates[], int days, int stockspan[]){
//   stack<int> st; 
//   //Base case
//   stockspan[0] = 1;
//   st.push(0);
//   for(int i=1; i<days; i++) //iterating through the rates
//   {
//     //Pop elements out of stack until either: 1) The stack gets empty
//     //or 2) the rate at stack top turns out to be larger than the rate
//     //at the current element
//     while(rates[i] > rates[st.top()])
//     {
//       st.pop();
//       if(st.empty()) 
//       {
//         break;
//       }
//     }
//     //set the stockspan values.
//     if(!st.empty())
//     {
//       stockspan[i] = i - st.top();
//     }
//     else
//     {
//       stockspan[i] = i+1;
//     }
//     st.push(i);
//   }
// }

void span(int arr[],int n){
  for(int i=0; i<n; i++){
    int span=1;
    for(int j=i-1; j>=0 && arr[j]<=arr[i]; j--){
      span++;
    }
    cout<<span<<" ";
  }
}

int main(){
  // int size = 6;
  // int rates[size] = {31,27,14,21,30,22};
  // int stockspan[size];
  // span(rates, size, stockspan);
  // for(int i=0; i<size; i++){
  //   cout<< stockspan[i] << " ";
  // }
  int size=10;
  int arr[size]={13,15,12,14,16,8,6,4,10,30};
  span(arr,size);
}