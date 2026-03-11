#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double rad, height;
	cin >> rad >> height;
	cout << fixed << setprecision(2) << (3.14 * rad * rad * height * 40 / 1000);
	return 0;
}