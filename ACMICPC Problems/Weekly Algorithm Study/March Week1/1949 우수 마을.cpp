/*#include<iostream>
#include<vector>
using namespace std;
vector<int> v[10001];
int A[10001];
int dp[10001][2];
bool dpa[10001];
bool visited[10001];
int max(int a, int b) { return a > b ? a : b; }
int dfs(int a) {
	visited[a] = true;
	if (dpa[a]) return max(dp[a][0], dp[a][1]);
	bool isp = false;
	for (int i = 0; i < v[a].size(); i++) {
		int to = v[a][i];
		if (visited[to] == false) {
			dfs(to);
			isp = true;
			dp[a][0] += max(dp[to][0],dp[to][1]);
			dp[a][1] += dp[to][0];
		}
	}
	dp[a][1] += A[a];
	dpa[a] = true;
	if (isp) return max(dp[a][0], dp[a][1]); 

	dp[a][0] = 0;
	dp[a][1] = A[a];
	return  dp[a][1]; 
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	visited[1] = true;
	cout << dfs(1) << "\n";
	return 0;
}*/