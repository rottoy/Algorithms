/*
#include<iostream>
#include<queue>
#include<vector>
#include<memory.h>
using namespace std;
int n, m;
char A[101][101];
bool visited[101][101];
bool checked[401][101][101];
int dist[101][101]; int dist2[101][101];
vector<int> esc_dist;
int px[2]; int py[2];
int dx[4] = { 1,-1,0,0 }; int dy[4] = { 0,0,1,-1 };
vector<pair<int, int>> esc;
vector < pair<int, int>> sharp;
queue<pair<int, int>> q;
int ans = 0;
void bfs(int b, int a,int which,int idx) {
	visited[b][a] = true;
	q.push({ b,a });

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (visited[ny][nx] == true) continue;
			if (A[ny][nx] == '*')continue;
			visited[ny][nx] = true;
			if (A[ny][nx] == '#')
			{
				if (which == 0){
					if (idx != -1) {
						if(sharp[idx].first==ny && sharp[idx].second==nx) dist[ny][nx] = dist[y][x];
						else dist[ny][nx] = dist[y][x] + 1;
					}
					else dist[ny][nx] = dist[y][x] + 1;
				}
				else{
					if(checked[idx][ny][nx]==false)
						dist2[ny][nx] = dist2[y][x] + 1;
					else
						dist2[ny][nx] = dist2[y][x];
				}
			}
			else { 
				if (which == 0)
					dist[ny][nx] = dist[y][x];
				else
					dist2[ny][nx] = dist2[y][x];
			}
			q.push({ ny,nx });
		}
	}
	return;
}
int main() {
	int t;
	scanf("%d",&t);
	//t = 1;
	while (t--) {
		scanf("%d %d",&n,&m);
		int idx = 0;
		for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//cin >> A[i][j];
			scanf(" %c", &A[i][j]);
			if (A[i][j] == '$') {
					px[idx] = j;
					py[idx++] = i;
			}
			if (A[i][j] == '#')sharp.push_back({ i, j });
			if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && A[i][j] != '*') esc.push_back({ i,j });
		}
		}
		bfs(py[0], px[0],0,-1);
		for (int i = 0; i < esc.size(); i++) esc_dist.push_back(dist[esc[i].first][esc[i].second]);

		for (int i = 0; i < sharp.size(); i++) {
			memset(visited, false, sizeof(visited));
			memset(dist, 0, sizeof(dist));
			bfs(py[0], px[0], 0,i);
			int sy = sharp[i].first; int sx = sharp[i].second;
			for (int j = 0; j < esc.size(); j++) { // Ż�ⱸ�� ������ŭ dist �� 
				int y = esc[j].first; int x = esc[j].second;
				if (dist[y][x] != esc_dist[j])//����Ż�Ⱚ�̶������ʴٸ�
				{
					checked[j][sy][sx] = true; //j��° Ż�ⱸ�� �ּҰ�ο���ġ�� sharp�� 1�� �������� �����ٴ� �ǹ�.
				}
			}
		}

		int ans = 999999;
		for (int i = 0; i < esc.size(); i++) {
			memset(visited, false, sizeof(visited));
			memset(dist2, 0, sizeof(dist2));
			bfs(py[1], px[1], 1, i); //1��° ������ i��° Ż�ⱸ�� Ż�������� 2��°�� bfs��
			for (int j = 0; j < esc.size(); j++) {
				int y2 = esc[j].first; int x2 = esc[j].second;
				if (ans > esc_dist[i] + dist2[y2][x2]) ans = esc_dist[i] + dist2[y2][x2];
			}
		}
			for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				A[i][j] = 0;
			}
			}
		memset(A, 0, sizeof(A));
		memset(visited, false, sizeof(visited));
		memset(dist2, 0, sizeof(dist2));
		memset(dist, 0, sizeof(dist));
		memset(checked, false, sizeof(checked));
		esc_dist.clear();
		esc.clear();
		sharp.clear();
		printf("%d\n", ans);
	}
	
}
*/