/*#include<iostream>
#include<algorithm>
using namespace std;
int N;
bool visited[26][26];
int A[26][26];
int area[26*26];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
void DFS(int x,int y,int k) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx <= 0 || ny <= 0 || nx > N || ny > N) continue;

		if (visited[nx][ny] == false && A[nx][ny] == A[x][y]) // 사실 A[nx][ny]==1 이어도 상관없으나 , 인풋이 1 말고 1,2,3,4... 이렇게 주어질때 사용되는 조건식이다. 상관은없음.
			DFS(nx, ny, k);

	}
	area[k]++;
	//return;
}
int main() {

	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%1d", &A[i][j]);
		}
	
	}
	
	int temp = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (visited[i][j] == false && A[i][j] == 1)
				DFS(i, j, temp++);
		}
	}



	sort(area, area + temp);
	cout << temp<<endl;
	for (int i = 0; i < temp; i++) {
		if (area[i]!=0) {
			cout << area[i] << endl;
		}
	}
	
	return 0;
}
*/
/*
#include<iostream>
#include<vector>
#include<memory.h>
#include<string>
#include<algorithm>
using namespace std;

int n;
int square[30][30];
bool checked[30][30];
int answer[20000];
int dx[4] = { 0,1 ,-1 ,0 };
int dy[4] = { 1,0 ,0, -1 };
int a_index = 0;
int last_x = 0;
int last_y = 0;

void dfs(int x, int y) {//x,y 에서 1인 지점을 따라가는 dfs
	if (x < 0 || y < 0 || x >= n || y >= n) {
		return;
	}
	last_x = x;
	last_y = y;
	checked[x][y] = true;
	answer[a_index]++;
	for (int i = 0; i < 4; i++) {
		if (x + dx[i] < 0 || y + dy[i] < 0 || x + dx[i] >= n || y + dy[i] >= n) {
			continue;
		}
		else {
			if (!checked[x + dx[i]][y + dy[i]]) {
				if (square[x][y] == 1 && square[x + dx[i]][y + dy[i]] == 1) {
					dfs(x + dx[i], y + dy[i]);
				}
			}
		}
	}
	return;
}

int search(int x, int y) { //완전 탐색
	checked[x][y] = true;
	if (x >= n || y >= n || x < 0 || y < 0) {
		return 0;
	}
	if (square[x][y] == 1) {
		dfs(x, y);
		a_index++;
		x = last_x;
		y = last_y;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (checked[i][j] == false && square[i][j] == 1)
				search(i, j);
		}
	}
	return 0;

}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%1d", &square[i][j]);
		}
	}
	search(0, 0);
	cout << a_index << endl;
	sort(answer, answer + a_index);
	for (int i = 0; i < a_index; i++) {
		if(answer[i]!=0)
		cout << answer[i] << endl;

	}

	return 0;
}
*/