#include <bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string name, birth;
	float mark1, mark2, mark3;	
};

void nhap(ThiSinh &n){
	getline(cin, n.name);
	cin >> n.birth;
	cin >> n.mark1 >> n.mark2 >> n.mark3;
}

void in(ThiSinh n){
	cout << n.name << " " << n.birth << " " << fixed << setprecision(1) << (n.mark1+n.mark2+n.mark3);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
