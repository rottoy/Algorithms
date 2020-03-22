/*#include<iostream>
#include<queue>
using namespace std;

int N, M;
queue<pair<int,int>> q;
int A[1001][1001];
bool visited[1001][1001];
int dist[1001][1001];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0, 0, 1 ,-1 };
int max(int a, int b) { return a > b ? a : b; }
void BFS() {

	while (!q.empty()) {
		pair<int , int> now=q.front();
		q.pop();
		int x = now.first;
		int y = now.second;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx <= 0 || ny <= 0 || nx > N || ny > M) continue;

			if (visited[nx][ny]==false&&A[nx][ny] == 0) {
				visited[nx][ny] = true;
				//A[nx][ny] = 1;
				q.push(make_pair(nx, ny));
				dist[nx][ny] = dist[x][y] + 1;
			}
		}

	}
}
int main() {

	cin >> M >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (visited[i][j] == false && A[i][j] == 1) {
				visited[i][j] = true;
				q.push(make_pair(i,j));
			}
		}
	}
	BFS();
	int mymax = 0;
	//하나라도 0이 남아있다면 -1 출력
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (A[i][j] == 0) {
				cout << "-1"; return 0;
			}
			mymax = max(mymax, dist[i][j]);
		}
	}
	cout << mymax;
	return 0;
}*/