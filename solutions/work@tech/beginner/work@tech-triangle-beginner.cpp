#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tests;
	cin >> tests;
	for(int i = 0; i < tests; i++){
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		if( n1+n2<n3 || n2+n3<n1 || n3+n1<n2 ){
			cout << -1 << '\n';
		} else {
			cout << n1+n2+n3 << '\n';
		}
	}
	return 0;
}