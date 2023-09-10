#include <bits/stdc++.h>

using namespace std;

int binSearch(vector<pair<int, int>> v, int n, int x){
	int left = 0, right = n - 1;
	while (left <= right){
		int mid = (left+right)/2;
		if (v[mid].first == x)
			return v[mid].second;
		else if (v[mid].first > x)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}

int main(){
	int test;
	cin >> test;
	while (test--){
		int n, x;
		cin >> n >> x;
		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back({x, i});
		}
		sort(v.begin(), v.end());
		cout << binSearch(v, n, x) + 1 << endl;
	}
}
