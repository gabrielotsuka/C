#include <bits/stdc++.h>

using namespace std;

int get_bigger(int *idx, vector<int> v){
	int mai = v[0];
	*idx = 0; 
	for(int i=1; i<v.size(); i++){
		if(v[i] > mai){
			mai = v[i];
			*idx = i;
		}
	}
	return mai;
}

int get_remain(vector<int> v){
	int r = 0;
	for(int i=0; i<v.size(); i++)
		r += v[i];
	return r;
}

void print(vector <int> v){
	for (int i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

int main() {
	vector<int> v;
	int idx, mai, sumt1 = 0, sumt2 = 0, c, n, cont = 0;
	cin >> c;
	while (c--){
		cin >> n;
		v.push_back(n);
	}
	while(sumt1 <= sumt2){
		sumt1 += get_bigger(&idx, v);
		v.erase(v.begin()+idx);
		sumt2 = get_remain(v);
		cont++;
	}

	cout << cont << endl;

	return 0;
}