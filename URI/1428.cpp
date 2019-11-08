#include <bits/stdc++.h>

using namespace std;

int main(){
	int c, m, n;
	cin >> c;
	while(c--){
		cin >> m >> n;
		m -= 2; n -= 2;
		if (m % 3 == 0)
			m = m/3;
		else 
 			m = m/3 + 1;

		if (n % 3 == 0)
			n = n / 3;
		else 
			n = n/3 +1;

		cout << m*n << endl;
	}
	return 0;
}