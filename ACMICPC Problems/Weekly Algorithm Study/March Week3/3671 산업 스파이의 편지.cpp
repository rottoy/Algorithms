/*
#include<iostream>
#include<string>
#include<stack>
#include<memory.h>
using namespace std;
bool prime[10000000];
bool check[10000000];
bool v[8];
int a[8],b[8];
int n,cnt;
stack<int> st;
void dfs(int depth,int k) {
	if (depth == k) {
		string s;
		for (int i = 0; i < k; i++) s += to_string(a[b[i]]);
		int i = atoi(s.c_str());
		if (prime[i]) {
			prime[i] = false;
			st.push(i);
			cnt++; }
		return;
	}
	for (int i = 0; i < n; i++) {
		if (v[i] == false) {
			b[depth] = i;
			v[i] = true;
			dfs(depth + 1, k);
			v[i] = false;
		}	
	}
}
int main() {
	int t;
	for (int i = 2; i < 10000000; i++) {
		if (check[i] == true)continue;
			prime[i] = true;
			check[i] = true;
		for (int j = i + i; j < 10000000; j += i) check[j] = true;
	}
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)a[i] = (s[i] - 48);
		n = s.length();
		for(int i=1;i<=n;i++)dfs(0,i);
		cout << cnt<<"\n";
		cnt = 0;
		memset(a, 0, sizeof(a));
		while (!st.empty()) { prime[st.top()] = true; st.pop(); }
	}
	return 0;
}*/