#include <bits/stdc++.h>

using namespace std;

struct Time{
	int hour, minute, second;
	friend istream &operator >> (istream &in, Time &x){
		in >> x.hour >> x.minute >> x.second;
		return in;
	}
	friend ostream &operator << (ostream &out, Time x){
		out << x.hour << ' ' << x.minute << ' ' << x.second;
		return out;
	}
};

bool cmp(Time x, Time y){
	if (x.hour < y.hour)
		return true;
	else if (x.hour > y.hour)
		return false;
	else if (x.minute < y.minute)
		return true;
	else if (x.minute > y.minute)
		return false;
	else if (x.second < y.second)
		return true;
	else if (x.second > y.second)
		return false;
	return true;
}

int main(){
	int n;
	cin >> n;
	Time myTime[n];
	for (int i = 0; i < n; i++)
		cin >> myTime[i];
	sort(myTime, myTime+n, cmp);
	for (int i = 0; i < n; i++)
		cout << myTime[i] << endl;
}
