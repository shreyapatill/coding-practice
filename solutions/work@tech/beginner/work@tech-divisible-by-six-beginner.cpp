#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for( int i = 0; i < n; i++ ){
		int num;
		cin >> num;
		cout << (num % 6 == 0 ? "True\n" : "False\n");
	}
	return 0;
}