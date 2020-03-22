/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> v[20001];
int dist[20001];
bool visited[20001];
queue<int> q;

void bfs(int x) {
	visited[x] = true;
	q.push(x);
	
	while (!q.empty()) {
		int a = q.front();
		visited[a] = true;
		q.pop();

		for (int i = 0; i < v[a].size(); i++) {
			int to = v[a][i];
			if (visited[to] == true)continue;
			if (dist[to] > dist[a] + 1)dist[to] = dist[a] + 1;
			q.push(to);
		}
	}
}
int main() {
	int n, m, ans = 0, cnt = 0, idx = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) { int a, b; cin >> a >> b; v[a].push_back(b); v[b].push_back(a); }
	for (int i = 2; i <= n; i++)dist[i] = 999999;
	bfs(1);
	for (int i = 1; i <= n; i++) { if (ans < dist[i]) { ans = dist[i]; idx = i; } }
	for (int i = 1; i <= n; i++) { if (ans == dist[i]) cnt++; }
	cout << idx << " " << ans << " " << cnt;
	return 0;
}*/