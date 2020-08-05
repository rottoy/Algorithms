/*

#include<iostream>
#include<algorithm>
using namespace std;



int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;
	cin >> n;
	int a, b, c;
	cin >> a >> b >> c;
	int dp[3] = { a,b,c }, dp2[3] = { a,b,c };
	for (int i = 1; i < n; i++) {
		cin >> a >> b >> c;
		int temp[3] = { dp[0],dp[1],dp[2] };

		dp[0] = max(temp[0], temp[1]) + a;
		dp[1] = max({ temp[0], temp[1],temp[2] }) + b;
		dp[2] = max(temp[1], temp[2]) + c;
		int temp2[3] = { dp2[0],dp2[1],dp2[2] };
		dp2[0] = min(temp2[0], temp2[1]) + a;
		dp2[1] = min({temp2[0], temp2[1],temp2[2] }) + b;
		dp2[2] = min(temp2[1], temp2[2]) + c;
	}
	

	cout << max({ dp[0], dp[1], dp[2] }) << " " << min({dp2[0],dp2[1],dp2[2]});
}
*/