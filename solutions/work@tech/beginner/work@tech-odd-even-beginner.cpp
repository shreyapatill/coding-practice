#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	for( int i = 0; i < T; i++ ){
		int num;
		cin >> num;
		cout << (num % 2 == 0 ? "EVEN\n" : "ODD\n" );
	}
	
	return 0;
}