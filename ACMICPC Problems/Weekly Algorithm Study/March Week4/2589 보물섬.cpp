/*
#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;
int n, m;
char a[51][51];
bool visited[51][51];
int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };
int dist[51][51];
vector<pair<int, int>> v;
queue < pair<int, int>>q;
void bfs(int b, int c) {
	visited[b][c] = true;
	q.push({ b,c });
	dist[b][c] = 0;
	while (!q.empty()) {
		auto z = q.front(); q.pop();
		int y = z.first; int x = z.second;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
			if (visited[ny][nx] == true || a[ny][nx] == 'W')continue;
			visited[ny][nx] = true;
			q.push({ ny,nx });
			dist[ny][nx] = dist[y][x] + 1;
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			dist[i][j] = -1;
		}
	}
	int ans = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(a[i][j]=='L')
			bfs(i, j);
			for (int a = 0; a < n; a++) {
				for (int b = 0; b < m; b++) {
					if (ans < dist[a][b])ans = dist[a][b];
				}
			}
			memset(visited, false, sizeof(visited));
			memset(dist, 0, sizeof(dist));
		}
	}
	if (ans == -1)cout << "0";
	else cout << ans;
}
*/