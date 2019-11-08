#include <bits/stdc++.h>

using namespace std;

int main () {
	int w1, w2, h1, h2, ht;
	cin >> w1 >> h1 >> w2 >> h2;
	ht = h1+h2+2;
	
	cout << (2*ht + w1 + w2 + abs(w1-w2)) << endl; 

	return 0;
}