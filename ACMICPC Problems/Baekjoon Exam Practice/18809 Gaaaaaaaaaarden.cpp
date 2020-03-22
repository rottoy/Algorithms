/*
#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;
bool vi[10],ch[51][51],fl[51][51];
pair<int,char> ar[51][51];
pair<int, int> cb[10];
vector <pair<int,char>> v;
struct st{int y;int x;char color;int t;};
queue<st>q;
int A[51][51], n, m, r, g,cc,ans,dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };
int bfs() {
	int te = 0;
	for (auto i : v) {//첫번째 두번째는 조합의 순서정보, 세번째는 색깔정보
		int b = cb[i.first].first;
		int a = cb[i.first].second;
		ch[b][a] = true;
		q.push({b,a, i.second,1 });
	}
	while (!q.empty()) {
		auto z=q.front(); q.pop();
		int x = z.x, y = z.y, t = z.t;
		char color = z.color;
		if (fl[y][x] == true)continue;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= m || ny >= n)continue;
			if (A[ny][nx] == 0)continue;
			if (ch[ny][nx]&& ar[ny][nx].first == t + 1) {
				char ct = ar[ny][nx].second;
				if (ct == 'r'&&color == 'g'&& !fl[ny][nx]){te++; fl[ny][nx] = true;}

			}
			if (ch[ny][nx])continue;if (fl[ny][nx])continue;
			ch[ny][nx] = true;
			ar[ny][nx] = { t+1, color};
			q.push({ ny,nx,color,t+1});
		}
	}
	return te;
}
void go(int de,int start,int w,char id) {
	if (de ==w) {
		if(id == 'r'){go(0, 0, g, 'g');}
		else{
			memset(ch, false, sizeof(ch));
			memset(ar, 0, sizeof(ar));
			memset(fl, false, sizeof(fl));
			int t= bfs();
			if (ans < t)ans = t;
		}
		return;
	}

	for (int i = start; i < cc; i++) {
		if (vi[i])continue;
		vi[i] = true;v.push_back({ i ,id});
		go(de + 1, i+1,w,id);
		vi[i] = false;v.pop_back();
	}

}

int main() {
	cin >> n >> m >> g >> r;
	for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
			cin >> A[i][j];
			if (A[i][j] == 2)cb[cc++] = { i,j };
		}
	}
	go(0, 0,r,'r');
	cout << ans;
}*/