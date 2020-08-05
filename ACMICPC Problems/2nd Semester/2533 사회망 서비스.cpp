/*
#include<iostream>
#include<vector>
using namespace std;

int dp[1000001][2];
vector<int> v[1000001];
int max(int a, int b) { return a > b ? a : b; }
int dfs(int prev,int now, int flag) {
	if (dp[now][flag])return dp[now][flag];
	dp[now][flag] = flag;
	for (int i = 0; i < v[now].size(); i++) {
		int to = v[now][i];
		if (prev == to)continue;
		int nonsel = dfs(now,to, 0);
		int sel = dfs(now,to, 1);
		dp[now][flag] += (flag==1 ? nonsel : max(sel, nonsel));
	}
	
	return dp[now][flag];
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n,ans=0;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for (int i = 0; i < 2; i++) {
		int temp = dfs(-1,1, i);
		if (ans < temp)ans = temp;
	}
	cout << n-ans;
	return 0;
}
*/