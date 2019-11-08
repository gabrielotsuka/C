#include <bits/stdc++.h>

using namespace std;


int main() {
	int d1, d2, d3, men;
	vector <int> v;
	cin >> d1 >> d2 >> d3;
	v.push_back(d1+d2+d3);
	v.push_back(2*d1 + 2*d2);
	v.push_back(2*d1 + 2*d3);
	v.push_back(2*d2 + 2*d3);
	men = v[0];
	for(int i=1; i < v.size(); i++)
		if(v[i] < men)
			men = v[i];
	cout << men << endl;

	return 0;
}