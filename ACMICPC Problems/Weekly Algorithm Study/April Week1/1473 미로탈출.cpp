/*
#include<iostream>
#include<queue>
#include<tuple>
#define VER (1<<3)+(1<<1)
#define HOR (1<<2)+(1<<0)
#define ALL VER+HOR
using namespace std;
int n, m;
typedef tuple<int,int,int,int,int> st;
int visited[7][7][1 << 7][1 << 7];
int dy[4] = { 0,1,0,-1}, dx[4] = { -1,0,1,0 };
int map[7][7][2];
struct cmp {
	bool operator()(st&u, st&v) {
		return get<4>(u) > get<4>(v);
	}
};
priority_queue<st, vector<st>, cmp> q;
void bfs() {
	q.emplace(0,0,0,0,0);
	visited[0][0][0][0] = 0;
	while (!q.empty()) {
		int y, x, col, row, t;
		tie(y, x, col, row, t) = q.top(); q.pop();
		
		if (y == n - 1 && x == m - 1) {
			cout << t; return;
		}
		int but = ((col&(1 << y)?1:0) + (row & (1 << x)?1:0) ) %2; // ���� ��ġ�� ��ư ����
		for (int i = 0; i < 4; i++) {// �� �Ʒ� �� �� ��
			if (map[y][x][but] & (1 << i)) { // ���� �ⱸ�� �ִٸ�,
				int ny = y + dy[i], nx = x + dx[i]; //�������� ã�ƺ���.	
				if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;//�ٱ��̸� out	
				if (visited[ny][nx][col][row])continue;
				visited[ny][nx][col][row] = t;
				int nbut = ((col&(1 << ny) ? 1 : 0) + (row & (1 << nx) ? 1 : 0)) % 2; //���� �濡 ���ؼ��� ����ġ Ȯ��.
				//cout << nbut << "\n";
				if (map[ny][nx][nbut] & (1 << i)) { // ��ư �ȴ����� ������ �ִ°�.
					
					q.emplace(ny,nx,col,row,t+1);
				}
				if( map[ny][nx][(nbut+1)%2] & (1<<i) ){ // ��ư �ȴ����� ������ ��
					q.emplace(ny, nx, col ^ (1 << y), row ^ (1 << x), t + 2);
				}
			}
			
		}
	}
	cout << "-1"; return;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char ch;
			cin >> ch;
			if (ch == 'A') {
				map[i][j][0] = ALL;
				map[i][j][1] = ALL;
			}
			else if (ch == 'B') {
				map[i][j][0] = 0;
				map[i][j][1] = 0;
			}
			else if (ch == 'C') {
				map[i][j][0] = VER;
				map[i][j][1] = HOR;
			}
			else if(ch=='D') {
				map[i][j][0] = HOR;
				map[i][j][1] = VER;
			}
		}
	}
	bfs();

	return 0;
}
*/