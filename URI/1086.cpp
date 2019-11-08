#include <bits/stdc++.h>

using namespace std;

int res=0;

int func(int n, int m, vector <int> v){
	int high = v.size()-1, low = 0, cont = 0;
	res = 0;
	for(int i = v.size()-1; i >= 0; i--){
		if(cont == n)
			return n;
		if(v[i] < m)
			break;
		if(v[i] == m){
			cont++;
			res++;
			high--;
		}
	}
	while(high > low && cont < n){
		if(v[low] + v[high] == m){
			res+=2;
			cont++;
			low++;
			high--;
		}
		else if(v[low] + v[high] > m)
			high--;
		else if(v[low] + v[high] < m)
			low++;
	}
	if(cont == n)
		return res;
	else 
		return -1;
}	

int main(){
	int m, n, l, k;
	while(cin >> m >> n){
		if(m == 0)
		    return 0;
		vector<int> tabuas;
		cin >> l >> k;
		m *= 100;
		n *= 100;
		for(int i = 0; i < k; ++i){
			int x;
			cin >> x;
			tabuas.push_back(x * 100);
		}
		sort(tabuas.begin(), tabuas.end());
		int x = -1, y = -1;
		x = func(m/l, n, tabuas);
		y = func(n/l, m, tabuas);
		
		if(m % l != 0)
		    x = -1;
		if(n % l != 0)
		    y = -1;
		if(x == -1 && y == -1)
			cout << "impossivel" << endl;
		else if(x == -1)
			cout << y << endl;
		else if(y == -1)
			cout << x << endl;
		else{
			if(x <= y)
			    cout << x << endl;
			else 
			    cout << y << endl;
		}	
	}
	return 0;
}