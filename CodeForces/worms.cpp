#include <bits/stdc++.h>

using namespace std;


int binary_search(vector <int> &v, int x){
	int lo = 1, hi = v.size()-1, ha;
	while(lo <= hi){
		ha = (lo + hi)/2;
		if (x > v[ha-1] and x <= v[ha])
			return ha;
		else if (x <= v[ha]-1)
			hi = ha - 1;
		else if (x > v[ha])
			lo = ha + 1;
	}
}


int main(){
	vector <int> v;
	int n, x;
	cin >> n;
	v.push_back(0);
	for(int i=0; i<n; i++){
		cin >> x;
		if(i == 0)
			v.push_back(x);
		else
			v.push_back(x+v[i]);
	}
	cin >> n;
	while(n--){
		cin >> x;
		cout << binary_search(v, x) << endl;
	}

	return 0;
}