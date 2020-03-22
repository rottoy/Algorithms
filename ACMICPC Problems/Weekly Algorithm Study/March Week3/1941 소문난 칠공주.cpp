/*
#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;
typedef pair<int, int> p;
bool visited[5][5];
bool bv[5][5];
char a[5][5];
int cnt = 0;
vector<p> v;
queue <p>q;
int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };
bool eval(){
	int c = 0;
	for (auto i : v) {
		int y = i.first;
		int x = i.second;
		if (a[y][x] == 'S') c++;
	}
	if (c >= 4) return true;
	else return false;
}
int adjacent() {
	int y = v[0].first;
	int x = v[0].second;
	q.push({ y,x });
	int c = 0;
	while (!q.empty()) {
		auto z = q.front(); q.pop();
		int b = z.first;
		int a = z.second;
		for (int i = 0; i < 4; i++) {
			int nb = b + dy[i];
			int na = a + dx[i];
			if (nb < 0 || na < 0 || nb >= 5 || na >= 5)continue;
			if (bv[nb][na] == true)continue;
			if (visited[nb][na] == true) {
				bv[nb][na] = true;
				c++;
				q.push({ nb,na });
			}
		}
	}
	memset(bv, false, sizeof(bv));
	return c;
}
void dfs(int start,int depth) {
	if (depth == 7) {
		if (adjacent() == 7 && eval())cnt++; 
		return;
	}
	for (int i = start; i < 25; i++) {
		int ny = i/5;
		int nx = i%5;
		if (visited[ny][nx] == true)continue;
		visited[ny][nx] = true;
		v.push_back({ ny,nx });
		dfs(i,depth + 1);
		v.pop_back();
		visited[ny][nx] = false;
	}
}
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	dfs(0,0);
	cout << cnt;
	return 0;
}*/