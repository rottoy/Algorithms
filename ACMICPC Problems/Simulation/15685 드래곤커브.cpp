/*
#include<iostream>
#include<math.h>
using namespace std;

int pat[4][1024];
bool board[101][101];
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,-1,0,1 };
void maked(int x, int y, int dir, int gen) {
	int gs = (1 << (gen-1));
	int ge = (1 << gen);
	board[y][x] = true;
	for (int k = 0; k < ge; k++) {
		int np = pat[dir][k];
		x += dx[np];
		y += dy[np];
		if (x < 0 || y < 0 || x>100 || y>100)continue;
		board[y][x] = true;
	}
	return;
}
int main() {
	pat[0][0] = 0;
	pat[1][0] = 1;
	pat[2][0] = 2;
	pat[3][0] = 3;
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 10; j++) {
			int st = (1 << (j - 1));
			int en = (1 << j);
			for (int k = 0; k < en-st; k++) {
				pat[i][st + k] = (pat[i][st - k-1] + 1 == 4) ? 0 : (pat[i][st - k-1] + 1);
			}
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		maked(a, b, c, d);
	}
	int ans = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (board[i][j] && board[i][j + 1] && board[i + 1][j] && board[i + 1][j + 1])ans++;
		}
	}
	cout << ans;
	return 0;
}
*/