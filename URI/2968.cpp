#include <bits/stdc++.h>

using namespace std;

int main() {
	double a,b;
	cin >> a >> b;
	for (int i=10; i<=90; i+=10){
		cout << int(ceil((a*b)*double(i)/100));
		if (i != 90)
			cout << " ";
	}
	cout << endl;

	return 0;
}