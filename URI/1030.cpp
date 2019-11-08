#include <bits/stdc++.h>

using namespace std;

int main() {
	int c;
	cin >> c;
	for(int j=1; j <= c; j++){
		int h, s, cont = -1;
		vector <int> vet;
		cin >> h >> s;
		for (int i=1; i<=h; i++)
			vet.push_back(i);
		int aux=h-1;
		for (int i=0; i<aux; i++){
			cont = (cont+s)%h;
			vet.erase(vet.begin()+cont);
			cont--;
			h--;
		}
		printf("Case %d: %d\n", j, vet[0]);
	}
	return 0;
}