/*#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<memory.h>
#define f first
#define s second
using namespace std;
struct st {
	int x;
	int y;
	int origin;
};
int a[101];
char c[101][101];
int b[101][101];
st d[101];
bool ans[101];
bool chk[101];
bool visited[101];
vector<int> v[101];
int vidx[101];
int n;
bool cmp(st&u, st&v) {
	if (u.x == v.x) return u.y < v.y;
	else return u.x < v.x;
}
bool ispossible(int now, int next) {
	if (now == next) return false;
	memset(visited, false, sizeof(visited));
	queue<int> q;
	q.push(now);
	visited[now] = true;

	while (!q.empty()) {
		int x = q.front(); q.pop();
		if (x == next) { return true; }
		for (int i = 1; i <= n; i++) {
			if (visited[i] == true)continue;
			if (b[x][i] == 0)continue;
			visited[i] = true;
			q.push(i);
		}
	}
	return false;
}
int main() {

	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> c[i][j]; b[i][j] = int(c[i][j] - 48);

		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (ispossible(i, j) && ispossible(j, i)) {
				//cout << idx <<" "<<j<<"\n";
				v[i].push_back(j); vidx[i]++; // vidx= idx¹øÂ°ÀÇ size
				//ans[idx] = true; chk[idx] = true; chk[j] = true;
			}
		}
	}

	for (int i = 1; i <= n; i++) { d[i].x = a[i]; d[i].y = vidx[i]; d[i].origin = i; }
	sort(d + 1, d + n + 1, cmp);
	//for (int j = 1; j <= n; j++) cout << d[j].x << " " << d[j].y << " " << d[j].origin << "\n";
	for (int i = 1; i <= n; i++) {
		int idx = d[i].origin;
		if (chk[idx])continue;
		for (int j = 1; j <= n; j++) {
			if (ispossible(idx, j) && ispossible(j, idx)) {
				ans[idx] = true; chk[idx] = true; chk[j] = true;
			}
		}
	}
	long long res = 0;
	for (int i = 1; i <= n; i++) {
		if (ans[i]) res += a[i];
	}
	cout << res;
	return 0;
}
*/
//for (int j = 1; j <= n; j++) cout <<d[j].x << " "<<d[j].y<<" "<<d[j].origin<<"\n";