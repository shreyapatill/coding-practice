#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int employees;
	cin >> employees;
	int flag_first = true;
	while( employees-- ){
		string name;
		double temp;
		cin >> name >> temp;
		if( temp > 98.6){
			if (flag_first){
				cout << name;
				flag_first = false;
			}else{
				cout << ", " << name;
			}
		}
	}
	
}