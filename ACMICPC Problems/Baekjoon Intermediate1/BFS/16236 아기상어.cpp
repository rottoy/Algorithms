/*
#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;
int a[21][21];
bool visited[21][21];
int dist[21][21];
int n,ans;
int dx[4] = { 0,-1,1,0 }, dy[4] = { -1,0,0,1};
struct st {
	int y;
	int x;
};
queue<st> q;
int cnt = 0;
void bfs(int b, int c,int vval) {
	visited[b][c] = true;
	a[b][c] = 0;
	q.push({ b,c});
	while (!q.empty()) {
		auto z = q.front(); q.pop();
		int y = z.y, x = z.x;
		//cout << y << " " << x << " " << val << endl;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= n)continue;
			if (visited[ny][nx] == true)continue;
			if (a[ny][nx] > vval)continue;
			visited[ny][nx] = true;
			dist[ny][nx] = dist[y][x] + 1;
			q.push({ ny,nx});

		}
	}
	int temp = 4000000;
	int iidx = -1, jidx = -1; bool isp = false;
	for (int i = 0; i <n; i++) {//
		for (int j = 0; j<n; j++) {
			if (a[i][j] < vval&&a[i][j]!=0) {
				if (temp > dist[i][j] &&visited[i][j]==true) 
				{
					temp = dist[i][j]; iidx = i; jidx = j; isp = true;
				}
			}
		}
	}
	if (isp) {
		ans += dist[iidx][jidx];
		memset(dist, 0, sizeof(dist));
		memset(visited, false, sizeof(visited));
		while (!q.empty())q.pop();
		cnt++;
		if (cnt == vval) {
			cnt = 0;
			bfs(iidx, jidx, vval + 1);
		}
		else {
			bfs(iidx, jidx, vval);
		}
	}
}
int main() {
	cin >> n;
	int ey, ex;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 9) { ey = i; ex = j; }
		}
	}
	bfs(ey, ex,2);
	cout << ans;
	return 0;
}
*/
/*
if (a[ny][nx] <= val && a[ny][nx]!=0)
			{

				if (a[ny][nx] != val) {
					cout << endl;
					cout << "현재 물고기 크기 : " << val << "\n";
					cout << ny << "," << nx << "잡아먹음\n";
					cout << "현재 경로 길이 :" << ans << "\n";
					for (int i = 0; i < n; i++) {
						for (int j = 0; j < n; j++) {
							cout << dist[i][j] << " ";
						}
						cout << endl;
					}
					a[ny][nx] = 0;
					ans += dist[ny][nx];
					memset(dist, 0, sizeof(dist));
					memset(visited, false, sizeof(visited));
					while (!q.empty())q.pop();
					cnt++;
					if (cnt == val) {
						cnt = 0;
						bfs(ny, nx, val + 1);
					}
					else {
						bfs(ny, nx, val);
					}
*/