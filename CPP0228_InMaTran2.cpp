#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<int> res1, res2;
int n;
int a[105][105];

void solve(){
	res1.clear();
	res2.clear();
	int le = 1, ri = n, top = 1, bot = n;
	while (le < ri && top < bot){
		for (int i = top; i <= bot; i++){
			res1.push_back(a[i][le]);
			res2.push_back(a[n-i+1][n-le+1]);
		}
		++le;
		--ri;
		for (int i = le; i <= ri; i++){
			res1.push_back(a[bot][i]);
			res2.push_back(a[n-bot+1][n-i+1]);
		}
		++top;
		for (int i = bot; i >= top; i--){
			res1.push_back(a[i][ri]);
			res2.push_back(a[n-i+1][n-ri+1]);
		}
		++le;
		--ri;
		for (int i = ri; i >= le; i--){
			res1.push_back(a[top][i]);
			res2.push_back(a[n-top+1][n-i+1]);
		}
		++top;
		bot -= 2;
	}
}

void print(){
	for (int i =res2.size()-1; i >= 0; i--)
		if (res2[i] == res2[i-1])
			cout << res2[i--] << ' ';
		else
			cout << res2[i] << ' ';
	cout << endl;
	for (int i = res1.size()-1; i>= 0; i--)
		if (res1[i] == res1[i-1]){
			cout << res1[i] << ' ';
			--i;
		}
		else
			cout << res1[i] << ' ';
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		n*= 4;
		int cnt = 1;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				a[i][j] = cnt++;
		solve();
		print();
	}
}

