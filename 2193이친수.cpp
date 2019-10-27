/*#include<iostream>

using namespace std;
long long dp[91];
long long a[91];
long long b[91];
int main() {
	 int n;
	cin >> n;

	a[1] = 0;
	a[2] = 1;
	a[3] = 1;
	a[4] = 2;
	b[2] = 0;
	b[3] = 1;
	b[4] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 3;
	for (int i = 5; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		b[i ] = a[i-1];
		//cout << a[i] << endl;
		
	}

	for (int i = 5; i <= n; i++) {
		
		dp[i] = a[i-1] * 2 + b[i-1];
	}
	cout << dp[n];

	return 0;
}*/