#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, cont = 0;
	string str;
	cin >> n >> str;
	for (int i=0; i<str.size(); i++) {
		if (str[i] == str[i+1]) {
			str.erase(str.begin()+i+1);
			i--;
			cont++;
		}
	}
	cout << cont << endl;
}