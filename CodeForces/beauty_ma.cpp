#include <bits/stdc++.h>

using namespace std;

int main() {
	int aux, mat[5][5], x, y;
	for (int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin >> aux;
			if (aux == 1){
				x = i;
				y = j;
			}
		}
	}
	cout << abs(2-x)+abs(2-y) << endl;


	return 0;
}