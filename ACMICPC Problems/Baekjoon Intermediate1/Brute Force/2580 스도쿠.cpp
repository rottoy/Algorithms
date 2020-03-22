/*#include<iostream>

using namespace std;
int A[9][9];
bool row[10][10]; // 1번째 : 숫자, 2번째 : 행
bool col[10][10]; // 1번째 : 숫자, 2번째 : 열
bool square[10][10]; //1번째 :숫자, 3번째: 1~9구역

void Print() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	return;
}
void dfs(int depth) {
	if (depth == 81) {
		Print();
		exit(0);
	}
	int y = depth / 9;
	int x = depth % 9;
	
	if (A[y][x] == 0) {
		for (int i = 1; i <= 9; i++) {
			if (row[y][i] == true)continue;
			if (col[x][i] == true)continue;
			if (square[(y / 3 * 3) + (x / 3)][i] == true)continue;
			A[y][x] = i;
			row[y][i] = true;
			col[x][i] = true;
			square[(y / 3 * 3) + (x / 3)][i] = true;
			dfs(depth + 1);
			A[y][x] = 0;
			row[y][i] = false;
			col[x][i] = false;
			square[(y / 3 * 3) + (x / 3)][i] = false;
		}
	}
	else dfs(depth + 1);
}
int main() {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> A[i][j];
			if (A[i][j] != 0) {
				row[i][A[i][j]] = true;
				col[j][A[i][j]] = true;
				square[((i / 3) * 3) + (j / 3)][A[i][j]] = true;
			}
		}
	}
	dfs(0);
	cout << endl;
	
	return 0; 
}*/