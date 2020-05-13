/*
#include <string>
#include <vector>
#include<queue>
#include<tuple>
#include<algorithm>
#include<iostream>
using namespace std;
bool visited[101][101][4];
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,-1,0,1 };
typedef tuple<int, int, int, int> st;
struct cmp {
	bool operator()(st& u, st& v) {
		return get<3>(u) > get<3>(v);
	}

};
int A[101][101];
priority_queue<st, vector<st>, cmp>q;
bool collision(int y1, int x1, int y2, int x2, int y3, int x3) {
	int x, y;
	if (y1 == y2)y = y3;
	else if (y1 == y3)y = y2;
	else y = y1;

	if (x1 == x2)x = x3;
	else if (x1 == x3)x = x2;
	else x = x1;
	return A[y][x];
}
int solution(vector<vector<int>> board) {
	int answer = 0;
	int n = board.size();
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			A[i][j] = board[i][j];
		}
	}
	q.emplace(0, 0, 0, 0);
	visited[0][0][0] = true;

	while (!q.empty())
	{
		int y, x, dir, t;
		tie(y, x, dir, t) = q.top(); q.pop();
		int y2 = y + dy[dir];
		int x2 = x + dx[dir];
		if ((y == n - 1 && x == n - 1) || (y2 == n - 1 && x2 == n - 1)) return t;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			int ny2 = ny + dy[dir];
			int nx2 = nx + dx[dir];

			if ((ny < 0 || nx < 0 || nx >= n || ny >= n) == false && (ny2 < 0 || nx2 < 0 || nx2 >= n || ny2 >= n) == false)
			{

				if (board[ny][nx] == 0 && board[ny2][nx2] == 0 && visited[ny][nx][dir] == false) {
					visited[ny][nx][dir] = true;
					q.emplace(ny, nx, dir, t + 1);
				}
			}
		}
		int ny3 = y + dy[(dir + 1) % 4];
		int nx3 = x + dx[(dir + 1) % 4];
		int ny4 = y + dy[(dir + 3) % 4];
		int nx4 = x + dx[(dir + 3) % 4];

		//x2,y2
		int ny5 = y2 + dy[(dir + 1) % 4];
		int nx5 = x2 + dx[(dir + 1) % 4];
		int ny6 = y2 + dy[(dir + 3) % 4];
		int nx6 = x2 + dx[(dir + 3) % 4];
		if ((y < 0 || x < 0 || x >= n || y >= n) == false && (ny3 < 0 || nx3 < 0 || nx3 >= n || ny3 >= n) == false)
		{
			int ndir = (dir + 1) % 4;
			if (collision(y, x, y2, x2, ny3, nx3) == false) {
				if (board[y][x] == 0 && board[ny3][nx3] == 0 && visited[y][x][ndir] == false) {
					visited[y][x][ndir] = true;
					q.emplace(y, x, ndir, t + 1);
				}
			}
			else {

			}
		}
		if ((y < 0 || x < 0 || x >= n || y >= n) == false && (ny4 < 0 || nx4 < 0 || nx4 >= n || ny4 >= n) == false)
		{
			int ndir = (dir + 3) % 4;
			if (collision(y, x, y2, x2, ny4, nx4) == false) {
				if (board[y][x] == 0 && board[ny4][nx4] == 0 && visited[y][x][ndir] == false) {
					visited[y][x][ndir] = true;
					q.emplace(y, x, ndir, t + 1);
				}
			}
		}


		if ((y2 < 0 || x2 < 0 || x2 >= n || y2 >= n) == false && (ny5 < 0 || nx5 < 0 || nx5 >= n || ny5 >= n) == false)
		{
			int ndir = (dir + 1) % 4;
			if (collision(y, x, y2, x2, ny5, nx5) == false) {
				if (board[y2][x2] == 0 && board[ny5][nx5] == 0 && visited[y2][x2][ndir] == false) {
					visited[y2][x2][ndir] = true;
					q.emplace(y2, x2, ndir, t + 1);
				}
			}
		}
		if ((y2 < 0 || x2 < 0 || x2 >= n || y2 >= n) == false && (ny6 < 0 || nx6 < 0 || nx6 >= n || ny6 >= n) == false)
		{
			int ndir = (dir + 3) % 4;
			if (collision(y, x, y2, x2, ny6, nx6) == false) {
				if (board[y2][x2] == 0 && board[ny6][nx6] == 0 && visited[y2][x2][ndir] == false) {
					visited[y2][x2][ndir] = true;
					q.emplace(y2, x2, ndir, t + 1);
				}
			}
		}

	}
	return answer;
}

int main() {

	vector<vector<int>> board = { {0, 0, 0, 1, 1 }, { 0, 0, 0, 1, 0 }, { 0, 1, 0, 1, 1 }, { 1, 1, 0, 0, 1 }, { 0, 0, 0, 0, 0 } };

	//cout << collision(2, 4, 3, 4, 3, 9)<<"\n";
	solution(board);

}
*/