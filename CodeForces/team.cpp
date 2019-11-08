#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b, c, r=0;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		a = a+b+c;
		if (a > 1)
			r++;
	}
	cout << r << endl;
	return 0;
}