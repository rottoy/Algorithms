/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> a[3000];
int check[3001];
int dist[3001];
int N;

int go(int x, int p) {
	//-2 : ����Ŭ ã��, ���Ե��� ����, -1:����Ŭ �� ã��, 0~n-1:����Ŭ ã��, ���� �ε���
	if (check[x] == 1) return x; // �̹� �Դ� �� �߰�!(=����Ŭ)�̸� �� ������ return
	check[x] = true;
	for (int y : a[x]) {
		if (y == p)continue;
		int res = go(y, x);
		if (res == -2) return -2; //����Ŭ�� ã�Ұ� -2�� return �ϱ� ����������(���̻� ���Ե��� �ʴ� ���̹Ƿ�) -2 return
		if (res >= 0) {
			check[x] = 2; // �湮�ߴµ� ����Ŭ�ΰ�. ���� return���� ���(=� ����Ŭ�� ����)�̹Ƿ�
			if (x == res) return -2; // �ٷ� ���� return ��(� ����)�� x�� ������,(=����Ŭ�� �����̿�����) -2�� return
			else return res; //���� ������ �߰߸������� ���� ���� ���� �״�� return �սô�.
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