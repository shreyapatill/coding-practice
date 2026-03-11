#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int candies, cousins;
	cin >> candies >> cousins;
	cout << (candies % cousins ? "NO" : "YES");
	return 0;
}