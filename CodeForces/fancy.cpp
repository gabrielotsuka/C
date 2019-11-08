#include <bits/stdc++.h>

using namespace std;

int main () {
	string str; 
	int N;
	
	cin >> N;
	getline(cin, str);
	
	while (N--) {
		getline(cin, str);
		str = str + " ";
		if (str.find(" not ") != -1 || (str.find("not ")==0))
			cout << "Real Fancy\n";
		else 
			cout << "regularly fancy\n";
	}

	return 0;
}