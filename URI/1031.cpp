#include<bits/stdc++.h>
using namespace std;

int func(int n,int s){
	vector<int> v;
	int aux;
	for(int i = 1; i <= n; i++)
		v.push_back(i);
	aux = -1;
	int cont = n-1;
	for(int i=0; i < cont; i++){
		aux = (aux + s) % n;
		if(i == 0)
			aux = 0;
		v.erase(v.begin() + (aux));
		aux--;
		n--;
	}
	return v[0];
}


int main(){
	int x;
	while(cin >> x){
		if(x==0)
			break;
		for(int i = 1; i <= 1000; i++){
			if(func(x,i) == 13){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}