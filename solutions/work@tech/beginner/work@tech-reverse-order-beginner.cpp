#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int length;
	cin >> length;
	string reverse = "";
	for(int i = 0; i < length; i++){
		int num;
		cin >> num;
		string n = to_string(num) + " ";
		reverse.insert(0, n);
	}
	cout << reverse;
	return 0;
}