#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, xi=0, yi=0, zi=0, x, y, z;
	cin >> c;
	while(c--){
		cin >> x >> y >> z;
		xi += x;
		yi += y;
		zi += z;
	}
	if (xi == 0 and yi == 0 and zi == 0)
		cout << "YES\n";
	else 
		cout << "NO\n";

	return 0;
}