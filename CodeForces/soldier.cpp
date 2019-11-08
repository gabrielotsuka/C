#include <bits/stdc++.h>

using namespace std;

int main(){
	int r, k, n, w, pt = 0;
	cin >> k >> n >> w;
	w ++;
	while(w--)
		pt += (w*k);
	r = pt - n;
	if (r < 0)
		r = 0;
	cout << r << endl;

	return 0;
}