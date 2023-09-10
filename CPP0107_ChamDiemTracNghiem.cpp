#include <bits/stdc++.h>

using namespace std;

int main(){
	double d = (double)10/15;
	string s101 = "ABBADCCABDCCABD";
	string s102 = "ACCABCDDBBCDDBB";
	int t;
	cin >> t;
	while (t--)	{
		double mark = 0;
		string s;
		int code;
		cin >> code;
		if (code == 101){
			for (int i = 0; i < 15; i++){
				char c;
				cin >> c;
				if (s101[i] == c)
					mark += d;
			}	
		}
		else {
			for (int i = 0; i < 15; i++){
				char c;
				cin >> c;
				if (s102[i] == c)
					mark += d;
			}	
		}
		cout << fixed << setprecision(2) << mark << endl;
	}
}
