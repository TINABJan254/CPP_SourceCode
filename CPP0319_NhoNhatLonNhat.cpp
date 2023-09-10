#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, s;
	cin >> m >> s;
	if ((s > 9*m) || (m > 1 && s == 0)){
		cout << "-1 -1";
		return 0;
	}
	int tmp = s;
	int max[m];
	for (int i = 0; i < m; i++){
		if (s >= 9){
			max[i] = 9;
			s -= 9;
		}
		else {
			max[i] = s;
			s = 0;
		}
	}
	int min[m];
	tmp--;
	for (int i = m-1; i >= 0; i--){
		if (tmp >= 9){
			min[i] = 9;
			tmp -= 9;
		}
		else {
			min[i] = tmp;
			tmp = 0;
		}
	}
	min[0]++;
	//print min
	for (int i = 0; i < m; i++)
		cout << min[i];
	cout << ' ';
	//print max
	for (int i = 0; i < m; i++)	
		cout << max[i];
}

