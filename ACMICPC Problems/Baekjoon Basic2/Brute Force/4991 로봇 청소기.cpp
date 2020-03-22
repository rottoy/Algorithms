/*#include<iostream>
#include<queue>
#include<vector>
#include<memory.h>
using namespace std;
int n, m;
char A[21][21];
bool visited[21][21];
vector<pair<int, int>> dirty(1);
queue<pair<int, int>> q;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int dist[11][21][21];
int ans = 9999999;
int cnt = 0;
int v[11];
bool vv[11];

int bfs(int a,int b,int didx) {
	visited[b][a] = true;
	q.push({ b,a });
	int dotcnt = 1;
	while (!q.empty()){
		int x=q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= m || ny >= n)continue;
			if (A[ny][nx] == 'x')continue;
			if (visited[ny][nx] == false) {
				visited[ny][nx] = true;
				dotcnt++;
				q.push({ ny,nx });
				dist[didx][ny][nx] = dist[didx][y][x] + 1;
			}
			
			}
	}
	return dotcnt;
}
void go(int depth) {
	if (depth == cnt) {
		//시작점~ v[0]까지의 거리
		int temp = dist[0][dirty[v[0]].first][dirty[v[0]].second];
		//cout << temp << endl;
		//v[0]~v[depth]까지의 거리
		for (int i = 0; i < cnt-1; i++) {
			int from = v[i];
			int to_y = dirty[v[i+1]].first;
			int to_x = dirty[v[i + 1]].second;
			temp += dist[from][to_y][to_x];
		}
		if (ans > temp) ans = temp;
		return;
	}
	for (int i = 1; i <= cnt; i++) {
		if (vv[i] == true) continue;
		vv[i] = true;
		v[depth] = i;
		go(depth + 1);
		v[depth] = 0;
		vv[i] = false;
	}
}
int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	while (true) {
		cin >> m >> n;
		int xcnt = 0; bool minus = false;
		if (m == 0 && n == 0) return 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++) {
				cin >> A[i][j];
				if (A[i][j] == 'o') { dirty[0] = make_pair( i,j ); }
				if (A[i][j] == '*') { dirty.push_back({ i,j }); cnt++; }
				if (A[i][j] == 'x') { xcnt++; }
				
			}
		}
		for (int i = 0; i <= cnt; i++) {
			//모든 dirty 쌍에 대한 bfs 필요
			int dotcnt=bfs(dirty[i].second, dirty[i].first,i);
			memset(visited, false, sizeof(visited));
			if (n*m - dotcnt != xcnt) { minus = true; break; }
		}
		if (minus) {
			cout << "-1\n";
		}
		else {
			go(0);
			cout << ans << "\n";
		}
		ans = 9999999; cnt = 0;
		memset(A, 0, sizeof(A));
		memset(visited, false, sizeof(visited));
		memset(vv, false, sizeof(vv));
		memset(v, 0, sizeof(v));
		memset(dist, 0, sizeof(dist));
		dirty.clear();
		dirty.assign(1, {-1,-1});

	}
	
	return 0;

}*/