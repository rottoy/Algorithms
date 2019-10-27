/*
#include<iostream>

using namespace std;
int p[1001];
int dp[1001];

int max(int a, int b) {
	return a > b ? a : b;
}
int main() {


	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	dp[1] = p[1];
	//cout << "p[10]의값 :" << p[10] << endl;
	for (int i = 2; i <= n; i++) {
		dp[i] = p[i];
		for (int j = 1; j <= i - 1; j++) {
			//cout << i << "번째 dp값 : 수정전" << dp[i] << endl;
			dp[i] = max(dp[i], dp[i - j]+dp[j]);
			//cout << i << "번째 dp값 : 수정후" << dp[i] << endl;
		}
	}

	cout << dp[n];
	return 0;
}
*/