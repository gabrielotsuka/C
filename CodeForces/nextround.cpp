#include <bits/stdc++.h>

using namespace std;

int main() {
	vector <int> v;
	int num, n, k, cont = 0;
	cin >> n >> k;
	while(n--){
		cin >> num;
		v.push_back(num);
	}
	for(int i=0; i<v.size(); i++) 
		if(v[i] >= v[k-1] and v[i] > 0)
			cont++;
	cout << cont << endl;

	return 0;
}