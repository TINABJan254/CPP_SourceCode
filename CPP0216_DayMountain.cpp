#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool check_left(int *a, int L, int posMax){
	for (int i = L; i < posMax; i++)
		if (a[i] > a[i+1])
			return false;
	return true;
}

bool check_right(int *a, int R, int posMax){
	for (int i = posMax+1; i < R; i++)
		if (a[i] < a[i+1])
			return false;
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, L, R;
		cin >> n;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cin >> L >> R;
		int posMax = max_element(a+L, a+R+1) - a;
		if (check_left(a, L, posMax) && check_right(a, R, posMax))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	
}
