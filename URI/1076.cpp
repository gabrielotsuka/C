#include <bits/stdc++.h>
using namespace std;

#define N 1010101
vector <int> adj[N];
int passos;

int main(){
	int inicial, V, A, aux, i1, i2;
	cin >> inicial >> V >> A;
	aux = A;
	while(aux--){
		cin >> i1 >> i2;
		adj[i1].push_back(i2);
		adj[i2].push_back(i1);
	}
	for (int i=1; i<V+1; i++){
		cout << "Vertice " << i << "\n";
		for (int j=0; j<adj[i].size(); j++)
			cout << adj[i][j] << " " ;
		cout << endl;
	}
		
	
	return 0;
}