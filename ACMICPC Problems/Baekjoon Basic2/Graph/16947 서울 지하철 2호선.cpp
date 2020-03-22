/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> a[3000];
int check[3001];
int dist[3001];
int N;

int go(int x, int p) {
	//-2 : 사이클 찾음, 포함되지 않음, -1:사이클 못 찾음, 0~n-1:사이클 찾음, 시작 인덱스
	if (check[x] == 1) return x; // 이미 왔던 곳 발견!(=사이클)이면 그 정점을 return
	check[x] = true;
	for (int y : a[x]) {
		if (y == p)continue;
		int res = go(y, x);
		if (res == -2) return -2; //사이클을 찾았고 -2를 return 하기 시작했으면(더이상 포함되지 않는 곳이므로) -2 return
		if (res >= 0) {
			check[x] = 2; // 방문했는데 사이클인것. 이전 return값이 양수(=어떤 사이클의 정점)이므로
			if (x == res) return -2; // 바로 이전 return 값(어떤 정점)이 x와 같으면,(=사이클의 시작이였으면) -2를 return
			else return res; //아직 같은거 발견못했으면 내가 받은 정점 그대로 return 합시다.
		}
	}
	return -1;
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int u, v;
		cin >> u >> v;
		u -= 1; v -= 1;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	go(0, -1);

	queue<int> q;
	for (int i = 0; i < N; i++) {
		if (check[i] == 2) {
			dist[i] = 0;
			q.push(i);
		}
		else {
			dist[i] = -1;
		}
	}

	while (!q.empty()) {
		int x = q.front(); q.pop();
		for (int y : a[x]) {
			if (dist[y] == -1) {
				q.push(y);
				dist[y] = dist[x] + 1;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << dist[i] << ' ';
	}
	cout << '\n';


	return 0;
}*/