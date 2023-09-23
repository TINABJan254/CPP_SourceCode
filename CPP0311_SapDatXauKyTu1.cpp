#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]]++;
    int max = INT_MIN;
    for (auto it = mp.begin(); it != mp.end(); it++)
        if (it->second > max)
            max = it->second;
    return (max <= s.length() - max + 1);
}

int main(){
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        if (check(s))
            cout << "1\n";
        else  
            cout << "0\n";
    }
}