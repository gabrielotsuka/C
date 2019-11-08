#include <bits/stdc++.h>

using namespace std;

int main () {
	int ans = 0, r, g, b;
	cin >> r >> g >> b;

	ans += (r/2 + (r%2));
	ans += (g/2 + (g%2));
	ans += (b/2 + (b%2));

	cout << ans + 30 << endl;

	return 0;
}