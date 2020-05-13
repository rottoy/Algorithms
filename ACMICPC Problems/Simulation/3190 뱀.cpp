/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int N,K,L;
queue<pair<int,int>> q;
vector<pair<int, int>> v;
vector<pair<int, char>> direction;
int A[110][110];
int dx[4] = { 1, 0,-1,0 };
int dy[4] = { 0, 1, 0,-1 };
int main() {
	cin >> N >> K;
	for (int i = 0; i <= N+1; i++) {
		for (int j = 0; j <= N+1; j++) {
			A[i][j] = 1;
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			A[i][j] = 0;
		}
	}
	for (int i = 0; i < K; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	cin >> L;
	for (int i = 0; i < L; i++) {
		int x; char y;
		cin >> x >> y;
		direction.push_back(make_pair(x, y));
	}
	q.push(make_pair(1, 1));
	int t = 0;
	int d = 0;
	int dindex = 0;
	while (true) {
		t++;
		//cout << t << endl;
		int y = q.back().first;
		int x = q.back().second;

		
		//이동 경로 결정
		int nx = x + dx[d];
		int ny = y + dy[d];
		//cout << "y : " << ny << "  x : " << nx << "로 이동합니다." << endl;
		if (A[ny][nx] == 1)
			break;
		int temp = 0;
		while (temp < q.size()) {


			int b = q.front().first;
			int a = q.front().second;
			if (temp != q.size() - 1) {
			//	cout << "temp y: " << b << "    x : " << a << endl;

				if (a == nx && b == ny)
				{
					cout << t; return 0;
				}

			}
			q.pop();
			q.push(make_pair(b, a));
			temp++;
		}
		//사과 체크 루틴
		bool len = false;
		for (int i = 0; i<v.size(); i++) {
			//cout << v[i].first << " " << v[i].second << endl;
			if (v[i].first == ny && v[i].second == nx) {
				len = true;
				v[i].first = -1;
				v[i].second = -1;
			//	cout << "y : " << ny << "  x : " << nx << "에서 사과먹음." << endl;
			}
		}
		//앞으로 가기 루틴 
		if (len) {
			q.push(make_pair(ny, nx));
		}
		else{
			//cout << "q size: " << q.size() << endl;
			
			//cout << "push : " << ny << "," << nx << endl;
			q.pop();
			q.push(make_pair(ny, nx));
		}
		//게임이 끝나는가 루틴
		

		//방향 체크 루틴
		if (dindex > direction.size() - 1) continue;
		if (t == direction[dindex].first) {
			if (direction[dindex].second == 'L')
				d = (d + 3) % 4;
			if (direction[dindex].second == 'D')
				d = (d + 1) % 4;
			dindex++;
		}
		//cout << d << endl;
	}
	cout << t;

	return 0;
}*/