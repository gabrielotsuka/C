#include <bits/stdc++.h>

using namespace std;


int main() {
	int r = 0, c, m, count = 0;
	vector <int> v;
	cin >> c;
	for (int i=0; i<12; i++){
		cin >> m;
		v.push_back(m); 
	}
	if (c == 0){
		cout << 0 << endl;
		return 0;
	}
	sort(v.begin(), v.end(), greater<int>());
	for(int i=0; i<v.size(); i++){
		count += v[i];
		if(count >= c){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}