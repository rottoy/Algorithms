#include<iostream>
/*#include<vector>
#include<queue>
using namespace std;

int N;
queue<int> q;
vector<int> v[100001];
int lv[100001];
bool visited[100001];
int A[100001];
void bfs(int start) {
	visited[start] = true;
	q.push(start);
	lv[start] = 1;
	while (!q.empty()) {
		int x= q.front();
		q.pop();
		for (int i = 0;i< v[x].size(); i++) {
			int to =v[x][i];
			if (visited[to] == false) {
				visited[to] = true;
				lv[to] = lv[x] + 1;
				q.push(to);
			}
		}
	}
}

int main() {

	cin >> N;
	int X = N * (N + 1) / 2;
	for (int i = 0; i < N-1; i++) {
		int a, b,t;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
		X -= b;
	}
	for (int i = 1; i <= N; i++) cin >> A[i];
	
	bfs(X);
	int temp = 0;
	//cout << N << endl;
	for (int i = 1; i <= N; i++) {
		cout << lv[A[i]] << " ";
		if (temp <= lv[A[i]]) {
			temp = lv[A[i]];
		}
		else {
			//cout << "0"; return 0;
		}
	} 
	cout << endl;
	cout << "1"; return 0;
	
	//1223
}*/