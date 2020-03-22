/*
#include<iostream>

using namespace std;
typedef long long ll;
int a[101][101];
ll dp[110][110];
int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
			cin >> a[i][j];
	dp[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == n - 1 && j == n - 1)break;
				if (a[i][j] + j < n)dp[i][a[i][j] + j] += dp[i][j];
				if (a[i][j] + i < n)dp[a[i][j] + i][j] += dp[i][j];
		}
	}
	cout << dp[n - 1][n - 1];
}
*/