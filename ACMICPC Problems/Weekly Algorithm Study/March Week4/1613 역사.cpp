/*
#include<iostream>
#include<queue>
#include<vector>
#include<memory.h>
using namespace std;
vector<int> v[401];
vector<int> bv[401];
int n, m, s;
bool visited[401];
queue<int> q;
/*
방향 그래프 ->벡터 한쌍만 추가 ->탐색이 되면 최소 1 or -1
			->탐색이 안되면 0
단방향에서 탐색이 되면 ->1
단방향에서 탐색이 안되면 -> 양방향에서 탐색이 되면 -1
						 -> 양방향에서 탐색이 안되면 0


void bfs(int a, int idx) {
	visited[a] = true;
	q.push(a);
	if (idx == 1) {
		while (!q.empty()) {
			int x = q.front(); q.pop();

			for (int i = 0; i < v[x].size(); i++) {
				int to = v[x][i];
				if (visited[to] == true)continue;
				visited[to] = true;
				q.push(to);
			}
		}
	}
	else {
		while (!q.empty()) {
			int x = q.front(); q.pop();

			for (int i = 0; i < bv[x].size(); i++) {
				int to = bv[x][i];
				if (visited[to] == true)continue;
				visited[to] = true;
				q.push(to);
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		bv[b].push_back(a);
	}
	cin >> s;
	for (int i = 0; i < s; i++) {
		memset(visited, false, sizeof(visited));
		int st, en;
		cin >> st >> en;
		bfs(st, 1);
		if (visited[en] == true) {
			cout << "-1\n"; continue;
		}
		else {
			memset(visited, false, sizeof(visited));
			bfs(st, 2);
			if (visited[en] == true) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
			continue;
		}
	}
}
*/