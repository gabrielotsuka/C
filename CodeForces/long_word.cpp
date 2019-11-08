#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string str, aux;
		cin >> str;
		int size = str.size();
		if (str.size() > 10) {
			aux += str[0];
			aux += to_string(size-2);
			aux += str[size-1];
			cout << aux << endl;
		}
		else 
			cout << str << endl;
	}
	
	return 0;
}