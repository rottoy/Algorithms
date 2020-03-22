/*#include<iostream>
#define mod 1000000000;
using namespace std;

long long dp[201][201];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= 200; i++) { dp[0][i] = 1;}
	for (int i = 1; i <= n; i++) {
		dp[i][1] = 1;
		dp[i][2] = i + 1;
		for (int a = 3; a <= k; a++) {
			for (int j = 0; j <= i; j++) {
				dp[i][a] += dp[i-j][a - 1];
				dp[i][a] %= mod;
			}
		}
	}
	cout << dp[n][k];
}*/