#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int tests;
	cin >> tests;
	for( int i = 0; i < tests; i++ ){
		string str1;
		cin >> str1;
		string str2 = str1;
		reverse(str2.begin(), str2.end());
		cout << (str1.compare(str2) == 0 ? "True\n" : "False\n");
	}
	return 0;
}