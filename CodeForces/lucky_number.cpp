#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, aux;
	bool flag = true;
	cin >> n;
	aux = n;
	while (aux) {
		if(aux % 10 != 4 and aux % 10 != 7){
			flag = !flag;
			break;
		}
		aux /= 10;
	}
	if (flag)
		cout << "YES\n";
	else{
		if(n % 4 == 0 or n % 7 == 0 or n % 47 == 0)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}


	return 0;
}