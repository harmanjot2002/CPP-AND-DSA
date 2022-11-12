// C++ program to find minimum number of reversals required to balance an stression
#include <bits/stdc++.h>
using namespace std;

int countMinReversals(string str){
	// length of exression must be even to make
	// it balanced by using reversals.
	if (str.length()% 2 != 0)
		return -1;

	// After this loop, stack contains unbalanced
	// part of expression, i.e., expression of the
	// form "}}..}{{..{"
	stack<char> s;
	for (int i = 0; i <str.length(); i++) {
		if (str[i] == '}' && !s.empty()) {
			if (s.top() == '{')
				s.pop();
			else
				s.push(str[i]);
		}
		else
			s.push(str[i]);
	}

	// Length of the reduced expression
	int red_len = s.size();

	// count opening brackets at the end of
	// stack
	int n = 0;
	while (!s.empty() && s.top() == '{') {
		s.pop();
		n++;
	}
	
	return (red_len / 2 + n % 2);
}

// Driver program to test above function
int main(){
	string str= "}}{{";
	cout << countMinReversals(str);
	return 0;
}