/*#include<iostream>

using namespace std;

bool check[51][51];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int n,m;
char a[51][51];
bool go(int x, int y, int px, int py,char color) {
	if (check[x][y]) return true;
	check[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i]; int ny = y + dy[i];
		if (nx < 0 || ny<0 || nx >= n || ny>=m)continue;
		if (!(nx==px && nx ==py) && a[nx][ny] == color) {
			if (go(nx, ny, x, y, color)) return true;
		}
			
	}
	return false;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	//Making ....
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check[i][j] == false) {
				if (go(i, j, -1, -1, a[i][j])){
					cout << "Yes"; exit(0);
				}
			}
		}
	}
	cout << "No";
	return 0;
}*/