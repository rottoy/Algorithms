/*
#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;
int dist[201][201];
int p[201][201];
bool visited[201];
vector<pair<int, int>> v[201];
priority_queue<pair<int,int>> q;
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++)
		dist[i][j] = 999999999;
	for (int i = 0; i < m; i++) {
		int a, b,c;
		cin >> a >> b>>c;
		v[a].push_back({ b,c });
		v[b].push_back({ a,c });
	}
	for (int a = 1; a <= n; a++) {
		
		dist[a][a] = 0;
		q.push({ 0,a });
		while (!q.empty()) {
			auto z = q.top();
			int x = -z.first;
			int y = z.second;
			q.pop();
			if (visited[y])continue;
			visited[y] = true;

			for (int i = 0; i < v[y].size(); i++) {
				int to = v[y][i].first;
				int w = v[y][i].second;
				if (dist[a][to] > x + w) {
					dist[a][to] = x + w;
					p[a][to] = y;
					q.push({ -dist[a][to], to });
				}
			}
		}
		memset(visited, false, sizeof(visited));
	}
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n; i++) { 
			if(p[i][j])
				cout << p[i][j] << " ";
			else
				cout << "- ";
		}
		cout << endl;
	}

	return 0;
}*/