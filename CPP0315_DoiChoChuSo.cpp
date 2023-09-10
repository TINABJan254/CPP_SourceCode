#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check_increase(string s){
	for (int i = 0; i < s.size() - 1; i++)
		if (s[i] > s[i+1])
			return false;
	return true;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		//loai di truong hop cac chu so tang dan
		if (check_increase(s)){
			cout << "-1" << endl;
			continue;
		}
		//tim tu cuoi ve cap dau tien giam dan tuc la (s[i] > s[i-1])
		int index = s.length() - 1;
		for (int i = s.length() - 1; i >= 1; i--){
			if (s[i - 1] > s[i]){
				index = i;
				break;
			}
		}
		//tim trong khoang tu index + 1 -> s.size()-1 xem co so nao s[index] < x < s[index-1]
		int move = index;
		for (int i = index + 1; i < s.length(); i++)
			if (s[i] > s[index] && s[i] < s[index - 1])
				move = i;
		//hoan doi
		swap(s[move], s[index-1]);
		//loai truong hop so khong len dau vd: 1000 => 0100
		if (s[0] == '0')
			cout << "-1" << endl;
		else
			cout << s << endl;
	}
}

