#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for( int i = 0; i < T; i++ ){
		double temp;
		cin >> temp;
		temp = (9*temp/5)+32;
		cout << fixed << setprecision(2) << temp << "\n";
	}
	return 0;
}