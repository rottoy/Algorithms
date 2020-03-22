/*#include<iostream>
#include<queue>
using namespace std;
int N, M;
int A[9][9];
int temp[9][9];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
queue<pair<int,int>> q;
bool visited[9][9];
int ans = 0;
void bfs() {

	while (!q.empty()) {
		
		int y = q.front().first;
		int x = q.front().second;
		//cout << y << "," << x << "¹æ¹®" << endl;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx <= 0 || ny <= 0 || nx > M || ny > N) continue;
			if (visited[ny][nx] == false && A[ny][nx]==0) {
				visited[ny][nx] = true;
				A[ny][nx] = 2;
				q.push(make_pair(ny, nx));
			}
		}
	}
	//return;
}
int main(){
	
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> A[i][j];
			temp[i][j] = A[i][j];
		}
	}

				for (int a1 = 1; a1 <= N; a1++) {
				for (int a2 = 1; a2 <= M; a2++) {
					if (temp[a1][a2] != 0) continue;

					for (int b1 = 1; b1 <= N; b1++) {
					for (int b2 = 1; b2 <= M; b2++) {
						if (a1 == b1 && a2 == b2) continue;
						if (temp[b1][b2] != 0) continue;

						for (int c1 = 1; c1 <= N; c1++) {
						for (int c2 = 1; c2 <= M; c2++) {
							if (a1==c1&&a2==c2||(b1 == c1 && b2 == c2))continue;
							if (temp[c1][c2] != 0) continue;

							for (int d1 = 1; d1 <= N; d1++) {
							for (int d2 = 1; d2 <= M; d2++) {
									A[d1][d2] = temp[d1][d2];
									if (A[d1][d2] == 2)
										q.push(make_pair(d1, d2));
							}
							}
							//cout << "a : " << a1 << "," << a2 << endl;
							//cout << "b : " << b1 << "," << b2 << endl;
							//cout << "c : " << c1 << "," << c2 << endl;
							A[a1][a2] = 1;
							A[b1][b2] = 1;
							A[c1][c2] = 1;
							bfs();
							int cnt = 0;

							for (int d1 = 1; d1 <= N; d1++) {
							for (int d2 = 1; d2 <= M; d2++) {
									if (A[d1][d2] == 0)
										cnt++;
									visited[d1][d2] = false;
							}
							}

							if (ans < cnt) { ans = cnt; }

						}
						}

					}
					}

				}
				}

	cout <<ans;
	return 0;
}*/