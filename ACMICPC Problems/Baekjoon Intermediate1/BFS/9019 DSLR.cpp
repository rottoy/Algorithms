/*
#include<iostream>
#include<string>
#include<queue>
#include<memory.h>
using namespace std;
queue<pair<int, string>> q;
bool v[10001];
void g(int a,int b) {
	v[a] = true; q.push({ a,""});
	while (!q.empty()) {
		int x=q.front().first;
		string y = q.front().second; q.pop();
		if (x == b) { cout<<y <<"\n"; return; }
		int d = (2 * x > 9999) ? 2 * x % 10000 : 2 * x, s = x == 0 ? 9999 : x - 1;
		int l = x / 1000 + (x % 1000) * 10, r = x / 10 + (x % 10) * 1000;
		if (v[d] == false) { v[d] = true; q.push({ d,y + "D" }); }
		if (v[s] == false) { v[s] = true; q.push({ s,y + "S" }); }
		if (v[l] == false) { v[l] = true; q.push({ l,y + "L" }); }
		if (v[r] == false) { v[r] = true; q.push({ r,y + "R" }); }
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		g(a, b);
		while (!q.empty())q.pop();
		memset(v, false, sizeof(v));
	}
	return 0;
}*/