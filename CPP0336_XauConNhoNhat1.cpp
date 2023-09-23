#include <bits/stdc++.h>

using namespace std;

void solve(string s1, string s2){
    int cnt1[256], cnt2[256];
    memset(cnt1, 0, sizeof(cnt1));
    memset(cnt2, 0, sizeof(cnt2));
    for (char x : s2)
        cnt2[x]++;
    int dem = 0, start = 0, res = INT_MAX, index = -1;
    for (int i = 0; i < s1.size(); i++){
        cnt1[s1[i]]++;
        if (cnt1[s1[i]] <= cnt2[s1[i]])
            ++dem;
        if (dem == s2.size()){
            while (cnt1[s1[start]] > cnt2[s1[start]] || cnt2[s1[start]] == 0){ //kí tự đó còn nhiều hơn kí tự đó ở trong xâu s2 hoặc ko xuất hiện ở trng xâu s2 thì ta có thể bỏ qua
                if (cnt1[s1[start]] > cnt2[s1[start]])
                    --cnt1[s1[start]];
                ++start;
            }
            if (res > i - start + 1){
                res = i - start + 1;
                index = start;
            }
        }
    }
    if (index == -1)
        cout << "-1\n";
    else  
        cout << s1.substr(index, res) << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s1, s2;
        cin >> s1 >> s2;
        solve(s1, s2);
	}
}
