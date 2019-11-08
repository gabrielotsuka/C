#include <bits/stdc++.h>

using namespace std;

int main () {
	string str1, str2;
	cin >> str1;
	for (int i=0; i<str1.size(); i+=2) 
		str2 += str1[i];
	sort(str2.begin(), str2.end());
	str1.clear();
	for (int i=0; i<str2.size(); i++){
		str1 += str2[i];
		if (i != str2.size()-1){
			str1 += "+";
		}
	}
	cout << str1 << endl;

	return 0;
}