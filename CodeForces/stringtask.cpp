#include <bits/stdc++.h>

using namespace std;



int main () {
	string str, result;
	cin >> str;
	for (int i=0; i<str.size(); i++) {
		if (str[i] > 40)
			str[i] = tolower(str[i]);
		if (str[i] != 'a' and str[i] != 'e'  and str[i] != 'i' and str[i] != 'o' and str[i] != 'u' and str[i] != 'y'){
			result += '.';
			result += str[i];
		}
	}
	cout << result << endl;
	return 0;
}