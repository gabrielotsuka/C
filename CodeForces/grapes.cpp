#include <bits/stdc++.h>

using namespace std;


int main() {
	vector <int> have(4), eat(3);
	for(int i=0; i<3; i++)
		cin >> eat[i];
	for(int i=0; i<3; i++)
		cin >> have[i];
	for(int i=0; i<3; i++){
		if(eat[i] > have[i]){
			cout << "NO\n";
			return 0;
		}
		have[i+1] += (have[i] - eat[i]);
	}
	cout << "YES\n";

	return 0;
}