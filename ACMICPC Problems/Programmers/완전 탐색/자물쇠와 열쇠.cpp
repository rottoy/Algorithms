/*#include <string>
#include <vector>
#include<iostream>
#include<memory.h>
using namespace std;

int A[21][21][4];
int board[60][60];
int temp[60][60];
int result[60][60];
int M, N;
int sx = 21, sy = 21;
bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	bool answer = true;
	M = key.size(); N = lock.size();
	for (int k = 0; k < 4; k++) {//copy key to A
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < M; j++) {
				if (k == 0)
					A[i][j][0] = key[i][j];
				else
					A[j][M - 1 - i][k] = A[i][j][k - 1];
			}
		}
	};

	for (int k = 0; k < 4; k++) {



		for (int a = -M + 1; a < N; a++) {
			for (int b = -M + 1; b < N; b++) {
				bool isp = true;
				memset(board, 0, sizeof(board));
				for (int i = 0; i < N; i++) //copy lock to board
					for (int j = 0; j < N; j++)
						board[sx + i][sy + j] = lock[i][j];

				for (int i = 0; i < M; i++) {
					for (int j = 0; j < M; j++) {
						if (i + a < 0 || b + j < 0 || i + a >= N || b + j >= N)continue;
						//cout << i << " " << j << " " << A[i][j][k] << " " << board[sx + a + i][sy + b + j] << "\n";
						if (A[i][j][k] == 0 && board[sx + a + i][sy + b + j] == 1)continue;
						if (A[i][j][k] == 1 && board[sx + a + i][sy + b + j] == 0) { board[sx + a + i][sy + b + j] = 1; continue; }
						if (A[i][j][k] == 1 && board[sx + a + i][sy + b + j] == 1) { isp = false; break; }
						if (A[i][j][k] == 0 && board[sx + a + i][sy + b + j] == 0) { isp = false; break; }
					}
				}

				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						if (board[sx + i][sy + j] == 0)isp = false;
					}
				}
				if (isp == true) {
					//cout << k;
					//cout << "finished"; 
					return true;
				}
			}
		}

	}
	//cout << "hi";
	return false;
}

int main() {
	vector<vector<int>> key = { {0,0,0},{1,0,0},{0,1,1} };
	vector<vector<int>> lock = { { 1,1,1 },{ 1,1,0 },{ 1,0,1 } };
	solution(key, lock);
}
*/
/*

for (int k = 0; k < 4; k++) {//copy key to A
for (int i = 0; i < M; i++) {
for (int j = 0; j < M; j++) {
cout << A[i][j][k] << " ";
}
cout << "\n";
}
cout << "\n";
}
*/