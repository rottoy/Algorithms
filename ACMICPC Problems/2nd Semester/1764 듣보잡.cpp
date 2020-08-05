/*
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
map<string, bool> mm;
map<string, bool> mm2;


int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n+m; i++) { 
		string s;
		cin >> s;
		if(i<n)mm[s] = true;
		else { mm2[s] = true;  }
	}
	vector<string> s;
	for (auto it = mm.begin();it != mm.end();it++) {

		if (mm2[(*it).first] == true)s.push_back((*it).first);
	}
	cout << s.size() << "\n";
	sort(s.begin(), s.end());
	for (auto i : s) cout << i << "\n";
}
*/