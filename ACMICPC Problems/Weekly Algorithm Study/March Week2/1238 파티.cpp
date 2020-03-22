/*
#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;
vector<pair<int, int>> v[1001];
int dist[1001][1001];
bool visited[1001];
priority_queue<pair<int, int>> q;
int main() {
	int n, m, X;
	cin >> n >> m >> X;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			dist[i][j] = 999999999; 
		}
	}
	
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
	}
	for (int a = 1; a <= n; a++) {
		dist[a][a] = 0;
		q.push({ 0,a });
		while (!q.empty()) {
			auto z = q.top();
			int x = z.second;
			q.pop();

			if (visited[x])continue;
			visited[x] = true;
			for (int i = 0; i < v[x].size(); i++) {
				int to = v[x][i].first;
				int w = v[x][i].second;

				if (dist[a][to] > dist[a][x] + w) {
					dist[a][to] = dist[a][x] + w;
					q.push({ -dist[a][to], to });
				}
			}

		}
		memset(visited, false, sizeof(visited));
	}
	int ans = 0;
	//for (int i = 1; i <= n; i++) cout << dist[X][i] << " ";
	//cout << endl;
	//for (int i = 1; i <= n; i++) cout << dist[i][X] << " ";
	//cout << endl;
	for (int i = 1; i <= n; i++) { if (ans < dist[X][i]+dist[i][X]) ans = dist[X][i]+dist[i][X]; }
	cout << ans;
	return 0;
}*/