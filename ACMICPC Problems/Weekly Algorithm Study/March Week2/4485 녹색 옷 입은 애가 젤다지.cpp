/*
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct st {
	int x;
	int y;
	int c;
	st(int x, int y, int c) : x(x), y(y), c(c) {
	}
};

struct cmp {
	bool operator()(st t, st u) {
		return t.c > u.c;
	}
};

priority_queue<st, vector<st>, cmp> q;
//priority_queue < pair<int, int> q;
int a[126][126];
int dist[126][126];
int dx[4] = { 1,-1,0,0 }; int dy[4] = { 0,0,1,-1 };

int main() {
	int n, t = 1;
	while (true) {
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf_s(" %d", &a[i][j]);
				dist[i][j] = 9999999;
			}
		}
		dist[0][0] = a[0][0];
		q.push(st(0, 0, -a[0][0]));
		while (!q.empty()) {
			auto z = q.top();
			int x = z.x, y = z.y; int c = -z.c;
			//cout << x<<" "<<y<<" "<<c<<"\n";
			q.pop();
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i], ny = y + dy[i];
				if (nx < 0 || ny < 0 || nx >= n || ny >= n)continue;
				if (dist[nx][ny] > c + a[nx][ny]) {
					dist[nx][ny] = c + a[nx][ny];
					q.push(st(nx, ny, -dist[nx][ny]));
				}
			}
		}

		printf("Problem %d: %d\n", t, dist[n - 1][n - 1]);
		t++;
	}

	return 0;
}*/