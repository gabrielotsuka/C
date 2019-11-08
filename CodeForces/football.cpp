#include <bits/stdc++.h>

using namespace std;

int main () {
	string str;
	int cont = 0;
	cin >> str;
	for (int i=0; i<str.size(); i++){
		if (i == 0)
			cont++;
		else{
			if (str[i] == str[i-1])
				cont ++;
			else 
				cont = 1;
		}
		if (cont == 7){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}