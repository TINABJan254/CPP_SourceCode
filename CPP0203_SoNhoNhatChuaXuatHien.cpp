#include <bits/stdc++.h>

using namespace std;
int mark[1000005] = {0};

int main(){
	int t;
	cin >> t;
	while (t--){
		for (int i = 0; i <= 1000000; i++)
			mark[i] = 0;
		int n;
		cin >> n;
		int a[n];
		
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] >= 0)
				mark[a[i]]++;
		}
		for (int i = 1; i <= 1000000; i++)
			if (mark[i] == 0){
				cout << i << endl;
				break;
			}
	}
	
}
