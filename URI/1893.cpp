#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	if (m >= 0  and m <= 2) 
		cout << "nova\n";
	else if (m >= 97 and m <= 100) 
		cout << "cheia\n";
	else if (m > 2 and m < 97){
		if (n < m) 
			cout << "crescente\n";
		else
			cout << "minguante\n";
	}

	return 0;
}