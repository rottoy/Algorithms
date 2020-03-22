/*#include<iostream>
#include<queue>
using namespace std;
int ladder[101];
int dist[101];
bool visited[101];
queue<int> q;
int n, m;
//사다리 작 ->큰 , 뱀  큰 ->작
//사다리 작은 수는 밑에수 갱신 큰 수는 위에수 갱신
void bfs() {
	visited[1] = true;
	q.push(1);
	dist[1] = 0;
	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int to = x + i;
			if (to > 100)continue;
			if (visited[to] == true) continue;
			visited[to] = true;
			if (ladder[to]) { to = ladder[to]; }
			if (dist[to] == -1) {
				dist[to] = dist[x] + 1;
				q.push(to);
			}
		}
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n+m; i++) { int a, b; cin >> a >> b; ladder[a] = b; }
	for (int i = 1; i <= 100; i++)dist[i] = -1;
	bfs();
	cout << dist[100];
	return 0;
}*/
