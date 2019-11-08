#include <bits/stdc++.h>

using namespace std;

int mi[100], ki[1000], aux[1000];

int main(){
	int m, k, count, test, n;
	while (cin >> m >> k){
		count = 0, test = 0;

		for (int i=0; i<m; i++){
			cin >> mi[i];
			aux[i] = 0;
		}

		for (int i=0; i<k; i++){
			cin >> ki[i];
			if (aux[ki[i]-1] == 0){
				aux[ki[i]-1] = 1;
				test ++;
			}
			count += mi[ki[i]-1];
			if (test == m){
				cout << count << endl;
				test = 101;
			}
		}
		if (test < m)
			cout << -1 << endl;
	}
	return 0;
}