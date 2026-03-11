#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tests;
	cin >> tests;
	for( int i = 0; i < tests; i++ ){
		int temp, humidity;
		cin >> temp >> humidity;
		cout << ( temp >= 30 ? "Hot" : "Cool");
		cout << ( humidity >= 90 ? " and Humid" : "");
		cout << "\n";
	}
	return 0;
}