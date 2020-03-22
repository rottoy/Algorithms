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
	//mid�� �������� s ���� e ���� �带 �� �ֳ� �Ǵ��ϱ�.
	//mid�� bfs�� ���� �� �Ǹ� (Max + mid)/2 �� mid �� �ø���
	//�ȵǸ� (mid + Min)/2�� mid �� ������
	//�Ѵ� �ȵǸ� break �� �� ���.
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
		if (check == false) { // ���� �߰����� Ŀ�� ���帣�� �갡 �߻��ߴٸ� mid���� �����.
			if (mid == Max) { mid = Min;  break; }
			Max = mid;
			mid = (mid + Min) / 2;
		}
		else { // �带 �� �ִٸ� mid���� ������.
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