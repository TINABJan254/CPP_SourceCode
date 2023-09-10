#include <bits/stdc++.h>

using namespace std;

bool binSearch(int a[], int n, int x){
	int left = 0, right = n - 1;
	while (left <= right){
		int mid = (left+right)/2;
		if (a[mid] == x)
			return true;
		else if (a[mid] > x)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return false;
}

int main(){
	int test;
	cin >> test;
	while (test--){
		int n, x;
		cin >> n >> x;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		if (binSearch(a, n, x))
			cout << "1" << endl;
		else 
			cout << "-1" << endl;
	}
}

