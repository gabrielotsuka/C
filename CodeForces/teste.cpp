#include <bits/stdc++.h>

using namespace std;

void print(vector <int> v){
	for (int i=0; i<v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

int main() {
	vector <int> v;
	for (int i=0; i<10; i++)
		v.push_back(i+1);
	print(v);
	v.erase(v.begin()+2);
	print(v);


	return 0;
}