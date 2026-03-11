#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num;
	cin >> num;
	while( num-- ){
		string name;
		cin >> name;
		int vowels = 0;
		for( char c : name ){
			c = tolower(c);
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
				vowels++;
			}
		}
		cout << vowels << "\n";
	}
	return 0;
}