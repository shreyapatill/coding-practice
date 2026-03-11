#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int inputs, temp, max;
	cin >> inputs;
	for(int i = 0; i < inputs; i++){
		cin >> temp;
		max = std::max(max, temp);
	}
	cout << (max % 2 == 0 ? "WON" : "LOSE");
	return 0;
}