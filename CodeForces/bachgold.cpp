#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, aux;
	cin >> c;
	aux = c / 2;
	cout << aux-- << endl;
	while(aux--){
		cout << 2 << " ";
	}
	if(c % 2 == 1)
		cout << 3;
	else 
		cout << 2;
	cout << endl;

	return 0;
}