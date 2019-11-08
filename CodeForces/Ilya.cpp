#include <bits/stdc++.h>

using namespace std;


int main() {
	string str;
	vector <int> vet;
	int c, l, r;
	cin >> str;
	vet.push_back(0);
	for(int i=0; i<str.size(); i++){
		if(str[i] == str[i+1])
			vet.push_back(1 + vet[i]);
		else
			vet.push_back(vet[i]);
	}
	cin >> c;
	while(c--){
		cin >> l >> r;
		cout << vet[r-1] - vet[l-1] << endl;
	}	
	return 0;
}