#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s = "WORKATTECH";
	for( int i = 0; i < s.length(); i+=2){
		cout << s[i] << s[i+1] << "\n";
	}
	return 0;
}