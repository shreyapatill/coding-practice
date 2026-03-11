#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	for( int i = 0; i < T; i++ ){
		int num;
		cin >> num;
		cout << num/10 << " " << num % 10 << "\n";
	}
	return 0;
}