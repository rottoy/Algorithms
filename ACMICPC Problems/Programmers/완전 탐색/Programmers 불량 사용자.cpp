/*
#include <string>
#include <vector>
#include<set>
#include<iostream>
using namespace std;
int n, m;
bool v[8]; int a[8];
vector<string> u;
vector<string> b;
set<multiset<string>> ss;
int ans = 0;
bool cmp(string x, string y) {
	if (x.length() != y.length())return false;
	else {

		for (int i = 0; i < x.length(); i++) {
			if (y[i] == '*')continue;
			if (x[i] != y[i])return false;
		}

		return true;
	}
}
void go(int depth) {
	if (depth == m) {
		multiset<string> temp;
		for (int i = 0; i < m; i++) {
			int to = a[i];
			if (cmp(u[to], b[i]) == false)return;
			temp.insert(u[to]);

		}
		if(ss.find(temp)==ss.end())ss.insert(temp);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (v[i])continue;
		v[i] = true;a[depth] = i;
		go(depth + 1);
		v[i] = false;a[depth] = 0;
	}
	return ;
}

int solution(vector<string> user_id, vector<string> banned_id) {
	int answer = 0;
	u = user_id; b = banned_id;
	n=user_id.size();m = banned_id.size();
	go(0);
	answer = ss.size();
	return answer;
}
int main() {

	vector<string> user_id = { "frodo", "fradi", "crodo", "abc123", "frodoc" }, banned_id = { "*rodo", "*rodo", "******" };
	solution(user_id,banned_id);
}
*/