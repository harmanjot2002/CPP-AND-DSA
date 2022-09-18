#include <iostream>
#include <stack>
using namespace std;

void span(int rates[], int days, int stockspan[]){

  stack<int> st; //Creating an empty stack

  //Base case
  stockspan[0] = 1;
  st.push(0);

  for(int i=1; i<days; i++) //iterating through the rates
  {
    //Pop elements out of stack until either: 1) The stack gets empty
    //or 2) the rate at stack top turns out to be larger than the rate
    //at the current element
    while(rates[i] > rates[st.top()])
    {
      st.pop();

      if(st.empty()) 
      {
        break;
      }
    }

    //set the stockspan values.
    if(!st.empty())
    {
      stockspan[i] = i - st.top();
    }
    else
    {
      stockspan[i] = i+1;
    }

    st.push(i);

  }
}
int main(){
  int size = 6;
  int rates[size] = {31,27,14,21,30,22};
  int stockspan[size];
  span(rates, size, stockspan);
  for(int i=0; i<size; i++){
    cout<< stockspan[i] << " ";
  }
}