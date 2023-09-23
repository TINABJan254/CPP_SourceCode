#include <bits/stdc++.h>

using namespace std;

void solve(string s, int k){
	int ans = 0;
	for (int i = 0; i < s.size(); i++){
		int dd[256];//dùng để đánh dấu xem kí tự đó đã xuất hiện trong xâu con đang xét hay chưa;
		memset(dd, 0, sizeof(dd));
		//xet tất cả các xâu con bắt đầu bằng chỉ số i;
		int cnt = 0;
		for (int j = i; j < s.size(); j++){
			if (dd[s[j]] == 0){
				cnt++;
			}
			if (cnt == k)
				++ans;
			if (cnt > k)
				break;
			dd[s[j]] = 1;
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int k;
		string s;
		cin >> s >> k;
		solve(s, k);
	}
}
