#include <bits/stdc++.h>

using namespace std;

string convert(string s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

string firstChar_Upper(string s){
	s[0] = toupper(s[0]);
	return s;
}

int main(){
	string s;
	vector<string> res;
	while (cin >> s){
		res.push_back(convert(s));
	}
	int i = 0;
	while (i < res.size()){
		//loai di truong hop tu dau tien co dau ngat cau vi du:	Tran. dinh. thien
		if ((i < res.size()) && (res[i][res[i].size()-1] == '.' || res[i][res[i].size()-1] == '!' || res[i][res[i].size()-1] == '?')){
			cout << (char)toupper(res[i][0]);
			for (int j = 1; j < res[i].size()-1; j++)
				cout << res[i][j];
			if (i != res.size() -1 )
				cout << endl;
			++i;
			//doi voi truong hop tu dau tien chua dau ngat cau thi chi can in ra tu do + enter sau do bo qua cac cau lenh ben duoi luon
			continue;
		}
		//Viet hoa ki tu dau tien cua tu dau tien cua cau (va dong thoi phai kiem tra xem do co phai tu chua dau ngat cau		
		if ((i < res.size()) && (res[i][res[i].size()-1] != '.' && res[i][res[i].size()-1] != '!' && res[i][res[i].size()-1] != '?'))
			cout << firstChar_Upper(res[i++]) << " ";
		//lap de in ra cac tu trong cau cho den khi gap tu chua dau ngat cau
		while (i < res.size() && res[i][res[i].size()-1] != '.' && res[i][res[i].size()-1] != '!' && res[i][res[i].size()-1] != '?'){
			cout << res[i++] << " ";
		}
		//in ra tu co ngat cau va xuong dong, dong thoi can phai kiem tra xem cau do da phai la cau cuoi cung cua doan van chua
		if ((i < res.size()) && (res[i][res[i].size()-1] == '.' || res[i][res[i].size()-1] == '!' || res[i][res[i].size()-1] == '?')){
			for (int j = 0; j < res[i].size()-1; j++)
				cout << res[i][j];
			//neu la cau cuoi cung cua doan thi khong in dau enter nua
			if (i != res.size() -1 )
				cout << endl;
			++i;
		}		
	}
}
