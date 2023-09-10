/* Tim do chenh lech nho nhat giua hai phan tu Ai va Aj trong mang, i va j khac nhau*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		int min = 1e9;
		for (int i = 1; i < n; i++)
			if (a[i] - a[i-1] < min)
				min = a[i] - a[i-1];
		if (n == 1) // chi co 1 phan tu duy nhat
			cout << "0\n";
		else cout << min << endl;
	}
	
}
