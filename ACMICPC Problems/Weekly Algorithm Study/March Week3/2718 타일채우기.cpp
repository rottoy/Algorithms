/*
#include<iostream>

using namespace std;

int dp[1001][1<<4];
int main() {
	int t;
	cin >> t;
	dp[1][0] = 1;
	dp[2][0] = 1;
	dp[2][3] = 1;
	dp[2][9] = 1;
	dp[2][12] = 1;
	dp[2][15] = 1;
	int full = (1 << 4) - 1;
	for (int i = 3; i < 1000; i++) {
		for (int j = 0; j <= full; j++) { dp[i][j] = dp[i - 1][15 - j]; }
		dp[i][0] += (dp[i - 1][0] + dp[i - 1][3] + dp[i - 1][9] + dp[i - 1][12]);
		dp[i][3] += dp[i-1][0];
		dp[i][9] += dp[i-1][0];
		dp[i][12] +=dp[i-1][0];
	}
	//for (int j = 0; j <= full; j++)cout << dp[3][j] << " ";
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		//for (int j = 0; j <= full; j++)ans += dp[n][j];
		ans = dp[n+1][0];
		cout << ans<<"\n";
	}
	return 0;
}
*/
/*
#include<iostream>

using namespace std;

int dp[1001][1 << 4];
int main() {
	int t;
	cin >> t;
	dp[1][0] = 1;
	dp[2][0] = 1;
	dp[2][3] = 1;
	dp[2][9] = 1;
	dp[2][12] = 1;
	dp[2][15] = 1;
	int full = (1 << 4) - 1;
	for (int i = 3; i < 1000; i++) {
		dp[i][0] += (dp[i - 2][0] + dp[i - 1][0] + dp[i - 1][3] + dp[i - 1][9] + dp[i - 1][12]);
		dp[i][3] += (dp[i - 1][12] + dp[i - 1][0]);
		dp[i][9] += (dp[i - 1][6] + dp[i - 1][0]);
		dp[i][6] = dp[i - 1][9];
		dp[i][12] += (dp[i - 1][3] + dp[i - 1][0]);
	}
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		ans = dp[n + 1][0];
		cout << ans << "\n";
	}
	return 0;
}*/