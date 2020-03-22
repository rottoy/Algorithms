/*#include<iostream>
#include<string>
#define mod 1000000
using namespace std;
int d[5001];
int main() {
	//25114
	//1 2 2 3 6
	//25 됨   26이하 2개
	//51 안됨 26이상 2개 안되면 값 그대로 승계되는듯
	//11 됨   26이하 d[n-1]+d[n-2]= 2 + 2 = 4 
	//14 됨   26이하  251 2개 +4 = 6 (=d[n-2]+d[n-1])
	//
	string s;
	cin >> s;
	if (s[0] == '0') { cout << "0"; return 0;}

	d[1] = 1;
	int t=atoi(s.substr(0, 2).c_str());
	if (t <= 26 && t%10!=0) d[2] = 2;
	else d[2] = 1;

	for (int i = 3; i <= s.length(); i++) {
		int temp = atoi(s.substr(i-2, 2).c_str());
		if(temp==0) { cout << "0"; return 0; }
		if (temp < 10)d[i] = d[i - 1];
		else if (temp <= 26){
			if (temp % 10 == 0)d[i] = d[i - 2];
			else d[i] = d[i - 1] + d[i - 2];
		}
		else {
			if (temp % 10 == 0) { cout << "0"; return 0;}
			else d[i] = d[i - 1];
		}
		d[i] %= mod;
	}
	//for (int i = 1; i <= s.length(); i++) cout << d[i] << " ";
	cout << d[s.length()];
	return 0;
}*/