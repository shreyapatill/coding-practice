#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int d;
	cin >> d;
	int guess;
	do{
		cin >> guess;
		if (guess == d)
			cout << "Correct Guess\n";
		else
			cout << "Incorrect Guess\n";
	} while (guess != d);
	return 0;
}