#include <bits/stdc++.h>

using namespace std;

#define ll long long

int check, n;
int a[25];

void ktao(){
	for (int i = 1; i <= n; i++)
		a[i] = i;
	check = 1;
}

void sinh(){
	int i = n-1; // bat dau bit gan cuoi, vi bit cuoi khong co co bit nao dung sau ca
	while (i >= 1 && a[i] > a[i+1]){
		--i;
	}
	if (i == 0){
		check = 0;
	}
	else {
		int j = n;
		//tim bit lon hon a[i] nhung phai be nhat
		while (j > i && a[j] < a[i]){
			--j;
		}
		//doi cho bit tim duoc va bit a[i]
		swap(a[i], a[j]);
		//dao nguoc phan tu i+1 -> n de thu duoc hoan vi moi be nhat lon hoan hoan vi cu
		reverse(a+i+1, a+n+1);
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		ktao();
		while (check){
			for (int i = 1; i <= n; i++)
				cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
