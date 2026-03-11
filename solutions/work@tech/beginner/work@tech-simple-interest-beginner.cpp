#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double principal, rate, time;
	cin >> principal >> rate >> time;
	cout << fixed << setprecision(6) << (principal*rate*time)/100;
	return 0;
}