/*#include<iostream>

using namespace std;

int dp[10001];
int A[10001];

int max(int a, int b) {

	return a > b ? a : b;
}
int main() {

	int n;
	cin >> n;
	
	for (int i = 1; i <=n; i++)
	{
		cin >> A[i];
	}
	
	dp[1] = A[1];	
	dp[2] = A[1]+A[2];
	dp[3] = max(A[2] + A[3], max(A[1] + A[3], A[1] + A[2]));
	for(int i = 4; i <= n; i++)
	{
		dp[i] = max(A[i-1]+A[i-2]+dp[i-4],max(A[i] + A[i - 1] + dp[i - 3], A[i] + dp[i - 2]));
	}

	cout << dp[n];
	return 0;
}*/