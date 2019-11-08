#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, ans;
	cin >> m >> n;
	m *= n;
	if (m%2 == 0)
		ans = m/2;
	else
		ans = (m-1)/2;
	cout << ans << endl;

	return 0;
}