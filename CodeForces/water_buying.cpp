#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int q, n, a, b, ans;
	cin >> q;
	while (q--){
		cin >> n >> a >> b;
		if (b >= 2*a) 
			ans = a * n;
		else
			(n/2)*b + (n%2)*a;
		cout << ans << endl;
	}
	return 0;
}