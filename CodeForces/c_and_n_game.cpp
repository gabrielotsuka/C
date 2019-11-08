#include <bits/stdc++.h>

using namespace std;

int main () {
	int T, N, aux, cont, size1, size2; 
	cin >> T;
	while(T--) {
		cin >> N;
		vector <int> Ai;
		for (int i=0; i<N; i++) {
			cin >> aux;
			Ai.push_back(aux);
		}
		sort(Ai.begin(), Ai.end());
		cont = 0;
		for (int j=0; j<Ai.size(); j++){
			if (Ai[j]<=0)
				cont++;
			else 
				break;
		}
		if (cont == 0 || cont == Ai.size())
			cout << Ai.size() << " " << Ai.size() << endl;
		else 
			cout << max(((int)Ai.size())-cont,cont) << " " << min(((int)Ai.size())-cont, cont) << endl;
	}
	return 0;
}