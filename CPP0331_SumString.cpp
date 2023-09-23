#include <bits/stdc++.h>

using namespace std;

string AddTwoString(string a, string b){
    if (a.length() < b.length())
        swap(a, b); // quy định b luôn là xâu bé hơn
    int n = a.length(), m = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    b += string(n-m, '0'); //thêm n - m số 0 vào cuối b để tạo thành quy luật cho dễ cộng
    //string(n-m, '0) là một constructor của string
    string res = "";
    int nho = 0;
    for (int i = 0; i < n; i++){
        int tmp = (a[i] - '0') + (b[i] - '0') + nho;
        res += (char)(tmp % 10 + '0');
        nho = tmp / 10;
    }
    if (nho)
        res += (char)(nho + '0');
    reverse(res.begin(), res.end());
    return res;
}

bool check(string s, int left, int len1, int len2){
    string s1 = s.substr(left, len1);
    string s2 = s.substr(left + len1, len2);
    string s3 = AddTwoString(s1, s2);
    if (s3.length() > (s.length() - left - len1 - len2))
        return false;
    if (s3 == s.substr(left + len1 + len2, s3.length())){
        if (s.length() - left - len1 - len2 == s3.length())
            return true;
        return check(s, left + len1, len2, s3.length());
    }
    return false;
}

void solve(string s){
    for (int i = 1; i < s.length(); i++){
        for (int j = 1; j < s.length() - i; j++)
            if (check(s, 0, i, j)){
                cout << "Yes\n";
                return;
            }
    }
    cout << "No\n";
}

int main(){
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        solve(s);
    }
}