#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double total;
	for(int i = 0; i < 10; i++){
		double temp;
		cin >> temp;
		total += temp;
	}
	cout << fixed << setprecision(6) << total / 10;
	return 0;
}