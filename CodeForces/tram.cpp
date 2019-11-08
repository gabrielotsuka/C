#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, test = 0, rf = 0, a, b;
	cin >> c;
	while(c--) {
		cin >> a >> b;
		test -= a;
		test += b;
		if (test > rf)
			rf = test;
	}
	cout << rf << endl; 

	return 0;
}