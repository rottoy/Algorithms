/*
#include <string>
#include <vector>
#include<iostream>
#include<memory.h>
using namespace std;
char a[31][31];
bool chk[31][31];
int N, M,ans;
bool getdown(int row) {
	int idx = -1;
	for (int i = N; i >= 0; i--) {
		if (a[i][row] == '0') { idx = i; break; }
	}
	int y = -1;
	if (idx == -1) return false; //ºóÄ­ÀÌ ¾ø´Ù
	else { // ºóÄ­ÀÌ ÀÖ´Ù.
		for (int i = idx - 1; i >= 0; i--) {
			if (a[i][row] != '0'&&a[i][row] != '1') { y = i;  break; }
		}
	}
	if (y == -1) {
		for (int i = N; i >= 0; i--)if (a[i][row] == '0')a[i][row] = '1';

		return false;
	}
	a[idx][row] = a[y][row];
	a[y][row] = '0';
	return true;
}
bool blockE() {
	bool isp = false;
	for (int i = 0; i < M - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (a[i][j] == a[i][j + 1] && a[i][j + 1] == a[i + 1][j] && a[i + 1][j] == a[i + 1][j + 1])
			{
				if (a[i][j] != '1' && a[i][j]!='0') {
					chk[i][j] = chk[i][j + 1] = chk[i + 1][j] = chk[i + 1][j + 1] = true;

					isp = true;
				}
			}
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (chk[i][j] == true) { a[i][j] = '0'; ans++; }
		}
	}
	memset(chk, false, sizeof(chk));
	//return isp;
	for (int i = 0; i < M; i++)
	{
		if (getdown(i)) i--;

	}

return isp;
}
int solution(int m, int n, vector<string> board) {
	int answer = 0;
	N = n; M = m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = board[i][j];
		}
	}
	//blockE();
	while (true) {
		if (blockE() == false)break;
		//cout << ans << "\n";
	}
	cout << ans;
	answer = ans;
	return answer;
}

int main() {
	vector<string> board = { "TTATT", "TTTTT", "TTTTT", "TTTTT" };
	solution(4, 5, board);
	return 0;
}
*/