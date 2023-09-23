//tư tưởng giống bài Xâu Con Nhỏ Nhất 1
#include <bits/stdc++.h>

using namespace std;

set<char> makeSet(string s){
    set<char> se;
    for (char x : s)
        se.insert(x);
    return se;
}

void solve(string s){
    int cnt1[256], cnt2[256];
    memset(cnt1, 0, sizeof(cnt1));
    memset(cnt2, 0, sizeof(cnt2));
    for (int i = 0; i < s.size(); i++)
        cnt2[s[i]] = 1;
    int numSpecOfS = makeSet(s).size();
    int dem = 0, start = 0, index = -1, res = INT_MAX;
    for (int i = 0; i < s.size(); i++){
        cnt1[s[i]]++;
        if (cnt1[s[i]] <= cnt2[s[i]])
            ++dem;
        if (dem == numSpecOfS){
            while (cnt1[s[start]] > cnt2[s[start]]){
                --cnt1[s[start]];
                ++start;
            }
            if (res > i - start + 1){
                index = start;
                res = i - start + 1;
            }
        }
    }
    cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
        cin >> s;
        solve(s);
	}
}
