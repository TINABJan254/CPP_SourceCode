#include <bits/stdc++.h>

using namespace std;
#define ll long long

struct Person{
	string name, birthDay, DD, MM, YY;
	friend istream &operator >> (istream &in, Person &x){
		in >> x.name;
		in >> x.birthDay;
		x.DD = x.birthDay.substr(0, 2);
		x.MM = x.birthDay.substr(3, 2);
		x.YY = x.birthDay.substr(6, 4);
		return in;
	}
};

bool cmp(Person a, Person b){
	if (a.YY != b.YY)
		return a.YY < b.YY;
	else if (a.MM != b.MM)
		return a.MM < b.MM;
	return a.DD < b.DD;
}

int main() {
	int n;
	cin >> n;
	Person List[n];
	for (int i = 0; i < n; i++){
		cin >> List[i];
	}
	sort(List, List+n, cmp);
	//print result
	cout << List[n-1].name << endl;
	cout << List[0].name; 
}
