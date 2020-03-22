/*#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<memory.h>
#define INT_MAX 2147483647
using namespace std;
bool visited[10001];
vector<pair<int,int>> v[10001];
queue<int> q;
int n, m;
int s = 0, e= 0;
bool check = true;
int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }

int main() {
	cin >> n >> m;
	int Max = -1;
	int Min = INT_MAX;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({ b ,c});
		v[b].push_back({ a ,c});
		if (Max < c) Max = c;
		if (Min > c) Min = c;
	}
	cin >> s >> e;
	//mid를 기준으로 s 부터 e 까지 흐를 수 있나 판단하기.
	//mid로 bfs를 했을 시 되면 (Max + mid)/2 로 mid 값 올리기
	//안되면 (mid + Min)/2로 mid 값 내리기
	//둘다 안되면 break 후 값 출력.
	int mid = (Max + Min) / 2;
	while (true) {
		q.push({ s});
		visited[s] = true;
		while (!q.empty()) {
			int x=q.front();
			q.pop();
			for (int i = 0; i < v[x].size(); i++) {
				int to = v[x][i].first;
				int cost = v[x][i].second;
				if (mid > cost) continue;
				if (visited[to] == true) continue;

				visited[to] = true;
				q.push({ to });
			}
		}
		if (visited[e] == false) { check = false; }
		if (check == false) { // 만약 중간값이 커서 못흐르는 얘가 발생했다면 mid값을 낮춰라.
			if (mid == Max) { mid = Min;  break; }
			Max = mid;
			mid = (mid + Min) / 2;
		}
		else { // 흐를 수 있다면 mid값을 높여라.
			if (mid == Max) {  break; }
			Min = mid;
			if((mid+Max)%2)mid = (mid + Max) / 2 + 1;
			mid = (mid + Max) / 2;
		}
		check = true;
		while (!q.empty())q.pop();
		memset(visited, false, sizeof(visited));
	}
	cout << mid;
	return 0;
}*/