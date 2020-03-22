/*
#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
struct st{
	vector<int> v;
	st(int a, int b, int c){
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
	}

};
queue<st> q;
set<string> visited;
void bfs() {
	while (!q.empty()) {
		int a = q.front().v[0];
		int b = q.front().v[1];
		int c = q.front().v[2];
		q.pop();
		if (a == b && b == c) {
			cout << "1"; return;
		}
		if (a != b) {
			int na = a + a;
			int nb = b - a;
			
			string s = to_string(na) + '/' + to_string(nb) + '/' + to_string(c);
			if (visited.find(s) == visited.end()) {
				q.push({ na,nb,c });
				visited.insert(s);
			}
		}
		if (a != c) {
			int na = a + a;
			int nc = c - a;
			string s = to_string(na) + '/' + to_string(b) + '/' + to_string(nc);
			if (visited.find(s) == visited.end()) {
				q.push({ na,b,nc });
				visited.insert(s);
			}
		}
		if (b != c) {
			int nb = b + b;
			int nc = c - b;
			string s = to_string(a) + '/' + to_string(nb) + '/' + to_string(nc);
			if (visited.find(s) == visited.end()) {
				q.push({ a,nb,nc });
				visited.insert(s);
			}
		}
	}
	cout << "0"; return;
}
int main() {

	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	q.push({ a[0],a[1],a[2] });
	visited.insert(to_string(a[0]) + '/' + to_string(a[1]) + '/' + to_string(a[2]));
	bfs();
	return 0;
}*/