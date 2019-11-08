#include <bits/stdc++.h>

using namespace std;

void printa_vet(vector <int> &vet){
	for (int i=0; i<vet.size(); i++){
		cout << vet[i] << " ";
	}
	cout << endl;
}

bool eh_pico (int ant, int act, int prox){
	if ((act > ant and act > prox) or (act < ant and act < prox)){
		return true;
	}
	else 
		return false;
}

int main() {
	int c, aux;
	bool ans;
	while(1){
		int teste = 0;
		int cont = 0;
		vector <int> vet;
		cin >> c;
		if (c == 0)
			break;
		for (int i=0; i<c; i++){
			cin >> aux;
			vet.push_back(aux);
		}
		vet.push_back(vet[0]);
		vet.insert(vet.begin(), vet[vet.size()-2]);
		for (int i=1; i<vet.size()-1; i++){
			ans = eh_pico(vet[i-1], vet[i], vet[i+1]);
			if (ans)
				cont++;
		}
		cout << cont << endl;
	}
	return 0;
}