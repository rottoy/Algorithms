/*#include<iostream>
#include<vector>

using namespace std;

int A[9][9];
bool row[9][9];
bool col[9][9];
bool square[9][9];

void Print() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d", A[i][j]);
		}
		printf("\n");
	}
	//exit(0);
}
void dfs(int depth) {
	if (depth == 81) {
		Print();
		exit(0);
	}
	int y = depth / 9;
	int x = depth % 9;
	//cout << depth << endl;
	if (A[y][x] == 0) {
		for (int i = 1; i <= 9; i++) {
			if (row[y][i] == false && col[x][i] == false && square[(y/3 *3)+(x/3)][i]==false) {
				row[y][i] = true;
				col[x][i] = true;
				square[(y / 3 * 3) + (x / 3)][i] = true;
				A[y][x] = i;
				dfs(depth + 1);
				A[y][x] = 0;
				row[y][i] = false;
				col[x][i] = false;
				square[(y / 3 * 3) + (x / 3)][i] = false;
			}
		}
	}
	else dfs(depth + 1);
}
int main() {

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%1d", &A[i][j]);
			if (A[i][j] != 0) {
				row[i][A[i][j]] = true;
				col[j][A[i][j]] = true;
				square[(i / 3 * 3) + (j / 3)][A[i][j]] = true;
			}
		}
	}

	dfs(0);

	return 0;
}*/