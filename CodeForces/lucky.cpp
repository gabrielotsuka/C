#include <bits/stdc++.h>

using namespace std;

int main () {
	int i, t_cases, qtd_a, lu_a, lu_b, aux;
	int cont_a, cont_b, cont_ab;
	vector<int> as;
	cin >> t_cases;

	while (t_cases--) {
		cont_a=0;
		cont_b=0;
		cont_ab=0;
		cin >> qtd_a >> lu_a >> lu_b;
		
		for (i=0; i<qtd_a; i++) {
			cin >> aux; 
			if (aux%lu_a == 0)
				cont_a++;
			if (aux%lu_b == 0)
				cont_b++;
			if ((aux%lu_a == 0) && (aux%lu_b == 0))
				cont_ab++;
		}
		cont_a -= cont_ab;
		cont_b -= cont_ab;

		if (cont_ab>0 && (cont_a + cont_ab) > cont_b)
			cout << "BOB\n";
		else
			cout << "ALICE\n";
	}

	return 0; 
}