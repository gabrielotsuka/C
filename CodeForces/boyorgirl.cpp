#include <bits/stdc++.h>

using namespace std;

int main() {
	string str, result;
	cin >> str;
	for (int i=0; i<str.size(); i++) {
		if(result.find(str[i]) == -1)
			result += str[i];
	}
	if(result.size() % 2 == 0)
		cout << "CHAT WITH HER!\n";
	else
		cout << "IGNORE HIM!\n";

	return 0;
}