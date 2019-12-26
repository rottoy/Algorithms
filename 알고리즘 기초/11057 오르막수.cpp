/*#include<iostream>
#define MAXINUM 1000000000;
long long dp[1001][11];
using namespace std;

int main() {

	int n;
	cin >> n;
	for (int i = 0; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= n; i++) {

		
		for (int j = 0; j <= 9; j++) {
		for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k]%10007;
		}
		}
		
	}
	long long result = 0;
	for (int i = 0; i <= 9; i++) {
		result += dp[n][i]%10007;
	}
	cout << result % 10007;
	return 0;
}*/