/*
#include<iostream>
#include<queue>
#include<tuple>
#include<memory.h>
#define garo 0
#define sero 1
using namespace std;

char a[21][21];
int dy[4] = { 0,1,0,-1 }, dx[4] = { -1,0,1,0 };
int n, m, sy, sx, ey, ex;
int lrud[10][2];
int st[10];
bool visited[21][21];
typedef tuple<int, int, int> mov;
struct cmp {
	bool operator()(mov&u, mov&v) { return get<2>(u) > get<2>(v); }

};
priority_queue<mov, vector<mov>, cmp> pq;

int caltime(int t, int num, int mywhich,int start) { //내가진입한 시간.
		//남은 시간을 판별할 교차로의 정보 ,현재 가로세로상태, 교차로 초기값 0:가로, 1:세로
	int mod = lrud[num][0] + lrud[num][1];
	int cur = (t-1)% mod; // -1을 해줘야 1~3 4~7,0이 0~2, 3~7로 바뀜.

	int which = -1;
	if (cur < lrud[num][0])
		which = start; // 범주 안이므로 현재 교차로의 상태는 회전되지 않은 상태.
	else
		which = (start + 1) % 2; // 범주 밖이므로 현재 교차로의 상태는 회전된 상태.
	if (mywhich == which) {
		return t; //t+1해서 더해서 들어온 값이므로 그대로 return;
	}
	else //제일 어려웠던 분기
	{
		if (cur < lrud[num][0]) //cur : 1~4
			return (t-cur)+lrud[num][0];
		else //cur : 5~7
			return t+(mod-cur);
	}

}
void bfs() {
	pq.emplace(sy, sx, 0);
	while (!pq.empty()) {

		int y, x, t; //y,x : 좌표, t : 현재 단위 시간
		tie(y, x, t) = pq.top(); pq.pop();
		if (visited[y][x] == true)continue;
		visited[y][x] = true;
		if (a[y][x] == 'B') { cout << t<<"\n"; return; }
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
			if (a[ny][nx] == '.')continue;
			//숫자 판별
			int m = 0;
			if (abs(ny - y) == 1)m = sero;
			if (abs(nx - x) == 1)m = garo;
			if (a[ny][nx] >= '0' && a[ny][nx] <= '9') {
				int nt = caltime(t+1, a[ny][nx] - '0',m,st[a[ny][nx]-'0']);
				pq.emplace(ny, nx, nt);
			}
			else {
				pq.emplace(ny, nx, t + 1);
			}

		}
	}
	cout << "impossible\n"; return;
}
int main() {
	//# : 평지 , .: 벽 , 0~9: 교차로 ,  A,B:출발,도착 
	//교차로 초기값 : - ㅣ  a,b :  동서,남북 방향 주기 값.
	while (true) {
		memset(a, 0, sizeof(a));
		memset(visited, false, sizeof(visited));
		memset(lrud, 0, sizeof(lrud));
		memset(st, 0, sizeof(st));
		while (!pq.empty())pq.pop();

		cin >> n >> m;
		int idx = 1;
		if (n == 0 && m == 0)return 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				if (a[i][j] == 'A') { sy = i, sx = j; }
				if (a[i][j] == 'B') { ey = i, ex = j; }
				if (a[i][j] >= '0'&&a[i][j] <= '9')idx++; //교차로의 갯수.
			}
		}
		for (int i = 1; i < idx; i++) {
			int aa, ab, ad; char c;
			cin >> aa >> c >> ab >> ad;
			if (c == '-') {
				lrud[aa][0] = ab;
				lrud[aa][1] = ad;
				st[aa] = garo;
			}
			else if (c == '|') {
				lrud[aa][1] = ab;
				lrud[aa][0] = ad;
				st[aa] = sero;
			}

		}
		bfs();
	}
	return 0;
}
*/