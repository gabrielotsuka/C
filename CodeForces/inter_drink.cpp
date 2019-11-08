#include <bits/stdc++.h>

using namespace std;


int bs(std::vector<int> &vet, int n){
	int lo=0, hi=vet.size()-1, ha;
	while(lo <= hi){
		ha = (lo+hi)/2;
		if (ha == vet.size()-1)
			return vet.size();
		else if (vet[ha] <= n){
			if (vet[ha+1] > n)
				return ha+1;
			else
				lo = ha+1;
		}
		else if (vet[ha] > n)
			hi = ha-1;
	}
}


int main(){
	int n, aux, cont;
	vector <int> vet;
	cin >> n;
	while(n--){
		cin >> aux;
		vet.push_back(aux);
	}
	sort(vet.begin(), vet.end());
	cin >> n;
	while(n--){
		cont = 0;
		cin >> aux;
		cout << bs(vet, aux) << endl;
	}

	return 0;
}