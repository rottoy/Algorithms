/*
#include<iostream>
#include<memory.h>
#define INF 999999999
using namespace std;

int dp[16][1 << 16]; int a[16][16]; int n; int curi;
int min(int a, int b) { return a < b ? a : b; }
int dfs(int cur, int bit) {
	if ((bit & 1 << curi) && bit != (1 << n) - 1) return INF;
	//비트가 다 차지 않았는데 현재 왕복점으로 돌아오려고하면, 빠꾸맥이기
	//이런 경우임 .1->3->1->2->4
	if (dp[cur][bit])return dp[cur][bit];
	if (bit == (1 << n) - 1)return 0;
	dp[cur][bit] = INF;

	for (int i = 0; i < n; i++) {
		if (cur == i)continue; //같은 노드면 넘어감.
		if (a[cur][i] == 0)continue; // 못가는 도시면 넘어감.
		if (bit&(1 << i)) continue; // 이미 가진 정보가 있다면 넘어감.

		int temp = dfs(i, bit | (1 << i)) + a[cur][i];
		dp[cur][bit] = min(dp[cur][bit], temp);

	}
	return dp[cur][bit];
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int ans = INF;
	for (int i = 0; i < n; i++) {
		memset(dp, 0, sizeof(dp));
		curi = i;
		int temp = dfs(i, 0);
		if (ans > temp)ans = temp;
	}
	cout << ans;
}
*/