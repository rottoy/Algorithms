/*
#include<iostream>
#define mod 1000000000
using namespace std;
typedef long long ll;
ll dp[101][11][1<<10];
int main() {

	int n;
	cin >> n;
	int full = (1 << 10) - 1;
	for (int i = 1; i <= 9; i++) {
		dp[1][i][1 << i] = 1;
	}
	for (int i = 2; i <= 100; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= full; k++) {
				if (j == 0) {
					dp[i][0][k | (1 << 0)] = (dp[i][0][k | (1 << 0)] + dp[i - 1][1][k]) % mod;
				}
				else if (j == 9) {
					dp[i][9][k | (1 << 9)] = (dp[i][9][k | (1 << 9)] + dp[i - 1][8][k]) % mod;
				}
				else {
					dp[i][j][k | (1 << j)]+=( (dp[i-1][j-1][k]%mod) + (dp[i-1][j+1][k]%mod) %mod);
				
				}
			}
		}
	}
	ll ans = 0;
	
		for (int j = 0; j <= 9; j++) {
			ans += dp[n][j][(1<<10)-1];
			ans %= mod;
		}
	cout << ans;
	return 0;
}
*/