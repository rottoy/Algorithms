/*
6118 ���ٲ���.
"�� �������κ��� ��� ���������� �ִܰŸ��� ���ϴ� ����".
���ͽ�Ʈ�� �˰����� ����Ͽ� �ذ� ����.

�׷���, ����ġ�� ��� 1�� ���(=�Ÿ��� �־����� ���� ���)���� "BFS"�� �ذ� ����.

����ġ�� 1�� ��쿡�� �ܼ� BFS�� �ذ� �����ϰ�,
����ġ�� 0,1�� ��쿡�� ���� �̿��Ͽ� ť�� �켱������ �ٸ����ϴ� bfs�� �ذ� ������.
�� ���ϴ� ��� ���ͽ�Ʈ��� Ǯ�����.
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
void bfs(int x) { //�Ϲ� bfs
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
	bfs(1); //1������ bfs����
	for (int i = 1; i <= n; i++) { if (ans < dist[i]) { ans = dist[i]; idx = i; } } //1�κ��� �Ÿ��� ���� ū �Ͱ� �� indexã��.
	for (int i = 1; i <= n; i++) { if (ans == dist[i]) cnt++; } //�� �Ÿ��� �������� ���� ����.
	cout << idx <<" "<< ans <<" "<< cnt;
	return 0;
}
*/