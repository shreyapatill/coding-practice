#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin >> num;
	int h = num / 100;
	int t = num / 10  % 10 * 10;
	int o = num % 10 * 100;
	cout << h+t+o;
	return 0;
}