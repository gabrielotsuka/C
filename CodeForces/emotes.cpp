#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m, k, aux, a, b;
	vector<int> as;

	cin >> n >> m >> k;
	for (int i=0; i<n; i++) {
		cin >> aux;
		as.push_back(aux);
	}
	sort(as.rbegin(),as.rend());
	a = as[0];
	b = as[1];

	long long int ans, cycle, remaind;
	cycle = 1LL * (m / (k + 1)) * (1LL * k * a + b); 
	remaind = 1LL * (m % (k + 1)) * a;
	ans = cycle + remaind;

	cout << ans << endl;
	return 0;
}