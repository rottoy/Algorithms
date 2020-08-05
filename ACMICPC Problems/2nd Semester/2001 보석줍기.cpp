/*
#include<iostream>
#include<queue>
#include<vector>
#include<memory.h>
using namespace std;

bool visited[101][1 << 14];
int n, m, k;
int jewel[101];
vector<pair<int, int>> v[101];
int ans = 0;
struct st {
	int node;
	int bit;
	int cnt;
};
void bfs(int s) {
	queue<st> q;
	int b = jewel[s] == 0 ? 0 : 1 << (jewel[s] - 1);
	int c = jewel[s] == 0 ? 0 : 1;
	if (c != 0)q.push({ s, b ,c });
	q.push({ s, 0 ,0 });
	if (c != 0)visited[s][b] = true;
	visited[s][0] = true;
	while (!q.empty()) {
		auto z = q.front(); q.pop();
		int node = z.node, bit = z.bit, cnt = z.cnt;
		if (s==node && ans < cnt)ans = cnt;

		for (int i = 0; i < v[node].size(); i++) {
			int to = v[node][i].first;
			int hold = v[node][i].second;
			if (hold < cnt) continue;

			if (visited[to][bit] == false){
				visited[to][bit] = true;
				q.push({ to,bit,cnt });
			}
			int nbit = bit | (jewel[to] == 0 ? 0 : 1 << (jewel[to] - 1));
			int ncnt = cnt + (jewel[to] == 0 ? 0 : 1);
			if (visited[to][nbit] == false) {
				visited[to][nbit] == true;
				q.push({ to,nbit,ncnt });
			}
		}
	}
	return;
}
int main() {

	cin >> n >> m >> k;
	vector<int> vv;
	for (int i = 1; i <= k; i++) {
		int x;
		cin >> x;
		jewel[x] = i;
		vv.push_back(x);
	}
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
		v[b].push_back({ a,c });
	}
	
	bfs(1);

	cout << ans;
	return 0;
}
*/