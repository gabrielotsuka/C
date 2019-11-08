#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, v;
	vector <int> vet;
	cin >> c;
	while(c--){
		cin >> v;
		vet.push_back(v);
	}
	for (int i=1; i<vet.size(); i++){
		if(vet[i] > vet[0]){
			cout << "N\n";
			return 0;
		}
	}
	cout << "S\n";
	return 0;
}