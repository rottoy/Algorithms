/*#include<iostream>
#include<queue>
using namespace std;
queue<pair<int,int>> q;
int d[201][201],dx[6] = {-2,-2,0,0,2,2},dy[6] = { -1,1,-2,2,-1,1};
bool v[201][201];
int main() {

	int n,r1,c1,r2,c2;
	cin >> n >>r1>>c1>>r2>>c2;
	v[r1][c1] = true;
	q.push({r1,c1});
	while (!q.empty()) {
		int x, y, nx, ny;
		x = q.front().first; y = q.front().second; q.pop();
		for (int i = 0; i < 6; i++) { 
			nx = x + dx[i]; ny = y + dy[i]; if (nx < 0 || ny < 0 || nx >= n || ny >= n)continue; if (v[nx][ny])continue;
			v[nx][ny] = true; d[nx][ny] = d[x][y] + 1; q.push({ nx,ny });
		}
	}
	(d[r2][c2]!=0)?cout << d[r2][c2]:cout<<"-1";
	
}*/