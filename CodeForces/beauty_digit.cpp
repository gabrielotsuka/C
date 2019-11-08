/*
#include <bits/stdc++.h>

using namespace std;


void print_vector (vector<int> N) {
	cout << "\nkaaappa ";
	for (const auto &i: N) {
		cout << i << " ";
	}
	cout << "cidade";
	cout << endl;
}


int max_no_index (vector<int> &N) {
	int idx = 0;
	for (int i=1; i<N.size();i++)
		if (N[i] > N[idx])
			idx = i;
	return idx;
}

void N_o (int d, vector<int> &N) {
	N.push_back(d);
	int i = max_no_index(N);
	N.erase(N.begin()+i);
}

int main () {
	int T, d;
	long long int Numb;
	cin >> T;
	while (T--) {
		vector <int> N;
		vector <int> N_aux;
		cin >> Numb >> d;
		for (const auto &i: to_string(Numb)) 
			N.push_back(i - '0');
		do {
			N_aux = N;
			N_o(d, N);
		}while (N_aux > N);
		for (int i=0; i<N.size(); i++) 
			cout << N[i];
		cout << endl;
	}
	return 0;
}

*/

#include <bits/stdc++.h>

using namespace std;

void subs_all (int d, vector<int> &N) {
	



}

int main () {
	int T, d;
	long long int Numb;
	cin >> T;
	while (T--) {
		vector <int> N;
		cin >> Numb >> d;
		for (const auto &i: to_string(Numb)) 
			N.push_back(i - '0');

		subs_all(d, N);

		for (int i=0; i<N.size(); i++) 
			cout << N[i];
		cout << endl;
	}
	return 0;
}