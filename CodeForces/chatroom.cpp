#include <bits/stdc++.h>

using namespace std;

int main() {
	string in;
	int idx = 0;
	cin >> in;
	for(int i=0; i<in.size(); i++){
		if (in[i] == 'h' and idx == 0)
			idx++;
		else if (in[i] == 'e' and idx == 1)
			idx++;
		else if (in[i] == 'l' and idx == 2)
			idx++;
		else if (in[i] == 'l' and idx == 3)
			idx++;
		else if (in[i] == 'o' and idx == 4){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}