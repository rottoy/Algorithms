/*
#include<iostream>
#include<memory.h>
#define INF 999999999
using namespace std;

int dp[16][1 << 16]; int a[16][16]; int n; int curi;
int min(int a, int b) { return a < b ? a : b; }
int dfs(int cur, int bit) {
	if ((bit & 1 << curi) && bit != (1 << n) - 1) return INF;
	//��Ʈ�� �� ���� �ʾҴµ� ���� �պ������� ���ƿ������ϸ�, ���ٸ��̱�
	//�̷� ����� .1->3->1->2->4
	if (dp[cur][bit])return dp[cur][bit];
	if (bit == (1 << n) - 1)return 0;
	dp[cur][bit] = INF;

	for (int i = 0; i < n; i++) {
		if (cur == i)continue; //���� ���� �Ѿ.
		if (a[cur][i] == 0)continue; // ������ ���ø� �Ѿ.
		if (bit&(1 << i)) continue; // �̹� ���� ������ �ִٸ� �Ѿ.

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