/*
#include<iostream>
#include<queue>
#include<tuple>
#include<memory.h>
using namespace std;
int A[1001][1001];

queue<tuple<int, int, int>> q;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int dist[1001][1001];
int visited[1001][1001];
int n, m;
int t = 1;
int g[1000001];
void dfs(int y, int x, int group) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (visited[ny][nx] != 0)continue;
		if (A[ny][nx] != 0)continue;
		if (nx < 0 || ny < 0 || nx >= m || ny >= n)continue;
		visited[ny][nx] = group;
		g[group]++;
		dfs(ny, nx, group);
	}
	return;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s(" %1d", &A[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == 1)continue;
			if (visited[i][j] != 0)continue;
			visited[i][j] = t;
			g[t]++;
			dfs(i, j, t++);
		}
	}/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << visited[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i < t ; i++) {
		cout << g[i] << "\n";
	}*/
/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == 0)dist[i][j] = 0;
			else {
				dist[i][j] = 1;
				int isp[4] = {};
				for (int a = 0; a < 4; a++) {
					bool possible = true;
					int ny = i + dy[a];
					int nx = j + dx[a];
					if (nx < 0 || ny < 0 || nx >= m || ny >= n)continue;
					int group = visited[ny][nx];
					for (int b = 0; b < 4; b++)
					{
						if (group == 0)continue;
						if (isp[b] == group)possible = false;
					}
					if (possible) {
						dist[i][j] += g[group];
						isp[a] = group;
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dist[i][j] % 10;
		}
		cout << "\n";
	}

}
*/