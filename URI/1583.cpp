#include <bits/stdc++.h>

using namespace std;

int n, m;
char mat[55][55];

void rec(int i, int j){
	mat[i][j] = 'T';
	if(i>0 and mat[i-1][j] == 'A')
		rec(i-1, j);
	if(i<n-1 and mat[i+1][j] == 'A')
		rec(i+1, j);
	if(j>0 and mat[i][j-1] == 'A')
		rec(i, j-1);
	if(j<m-1 and mat[i][j+1] == 'A')
		rec(i, j+1); 
}

int main(){
	while(1){
		cin >> n >> m;
		if (n == 0)
			return 0;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> mat[i][j];
			}
		}
		for (int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if (mat[i][j] == 'T')
					rec(i, j);
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cout << mat[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}