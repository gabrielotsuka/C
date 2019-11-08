#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m, a, rm, rn;
	long long rf;
	cin >> n >> m >> a;
	rm = (m + a - 1)/a;
	rn = (n + a - 1)/a;
	rf = 1LL*rm*rn;
	cout << rf << endl;

	return 0;
}