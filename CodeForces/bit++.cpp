#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, X = 0;
	string str;
	cin >> n;
	while (n--) {
		cin >> str;
		for (int i=0; i<str.size(); i++){
			if (str[i] == '+'){
				X++;
				break;
			}
			else if (str[i] == '-'){
				X--;
				break;
			}
		}
	}
	cout << X << endl;

	return 0;
}