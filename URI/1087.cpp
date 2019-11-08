#include <bits/stdc++.h>

using namespace std;

int main() {
	int x1, y1, x2, y2;
	while (1){
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 == 0)
			return 0;
		if (x1 == x2 and y1 == y2)
			cout << "0\n";
		else if ((abs(x2-x1) == abs(y2-y1)) or (x1 == x2) or (y1 == y2))
			cout << "1\n";
		else 
			cout << "2\n";		
	}
	return 0;
}