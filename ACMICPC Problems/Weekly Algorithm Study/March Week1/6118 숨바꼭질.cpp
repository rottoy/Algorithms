/*
6118 숨바꼭질.
"한 정점으로부터 모든 정점까지의 최단거리를 구하는 유형".
다익스트라 알고리즘을 사용하여 해결 가능.

그러나, 가중치가 모두 1인 경우(=거리가 주어지지 않은 경우)에는 "BFS"로 해결 가능.

가중치가 1인 경우에는 단순 BFS로 해결 가능하고,
가중치가 0,1인 경우에는 덱을 이용하여 큐의 우선순위를 다르게하는 bfs로 해결 가능함.
그 이하는 모두 다익스트라로 풀어야함.
*/
/*
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> v[20001];
int dist[20001];
bool visited[20001];
queue<int> q;
void bfs(int x) { //일반 bfs
	visited[x] = true;
	q.push(x);
	while (!q.empty()) {
		int a = q.front();
		q.pop();

		for (int i = 0; i < v[a].size(); i++) {
			int to = v[a][i];
			if (visited[to] == true) continue;
			visited[to] = true;
			q.push(to);
			dist[to] = dist[a] + 1;
		}
	}
}
int main() {
	int n, m,ans=0,cnt=0,idx=0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) { int a, b; cin >> a >> b; v[a].push_back(b); v[b].push_back(a); }
	bfs(1); //1번에서 bfs시작
	for (int i = 1; i <= n; i++) { if (ans < dist[i]) { ans = dist[i]; idx = i; } } //1로부터 거리가 제일 큰 것과 그 index찾기.
	for (int i = 1; i <= n; i++) { if (ans == dist[i]) cnt++; } //그 거리랑 같은것의 갯수 새기.
	cout << idx <<" "<< ans <<" "<< cnt;
	return 0;
}
*/