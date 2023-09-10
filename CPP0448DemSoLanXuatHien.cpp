#include <bits/stdc++.h>

using namespace std;

int firstPos(int a[], int n, int x){
	int left = 0, right = n-1;
	int res = -1;
	while (left <= right){
		int mid = (left+right)/2;
		if (a[mid] == x){
			res = mid;
			right = mid - 1;
		}
		else if (a[mid] > x){
			right = mid - 1;
		}
		else
			left = mid+1;
	}
	return res;
}

int lastPos(int a[], int n, int x){
	int left = 0, right = n-1;
	int res = -1;
	while (left <= right){
		int mid = (left+right)/2;
		if (a[mid] == x){
			res = mid;
			left = mid+1;
		}
		else if (a[mid] > x){
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	return res; 
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, x;
		cin >> n >>x;
		int a[n+5];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int fi = firstPos(a, n, x);
		int la = lastPos(a, n, x);
		if (fi != -1)
			cout << la-fi+1 << endl;
		else 
			cout << "-1\n";
	}
}

