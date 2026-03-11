#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	for( int i = 0; i < N; i++ ){
		int num;
		cin >> num;
		if( num == 7 ){
			cout << "EQUAL\n";
		} else if( num < 7 ){
			cout << "DOWN\n";
		} else {
			cout << "UP\n";
		}
	}
	return 0;
}