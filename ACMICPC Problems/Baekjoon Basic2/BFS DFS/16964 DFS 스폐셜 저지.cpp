/*#include<iostream>
#include<vector>

using namespace std;

int N;
bool visited[100001];
vector<int> v[100001];
int A[100001];
int lv[100001];
int tsize[100001];
int dfs(int x,int level) {
	int size = 1;
	for (int i = 0; i < v[x].size(); i++) {
		
		int to = v[x][i];
		if (visited[to] == false) {
			visited[to] = true;
			//cout << to << " " << level << endl;
			lv[to] = level;
			size+=dfs(to, level + 1);
		}
	}
	return tsize[x]=size;
}

int main() {
	cin >> N;
	int a, b;
	
	for (int i = 0; i < N-1; i++) {
		
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);

	}
	for (int i = 1; i <= N; i++) cin >> A[i];
	lv[1] = 1;
	visited[1] = true;
	dfs(1,2);

	for (int i = 1; i <= N; i++) {
		int x = A[i];
		if (tsize[x] == 1 || i + tsize[x] >= N) continue;
		int next = A[i + tsize[x]];
		if (lv[next] > lv[x]) {
			cout << "0"; return 0;
		}
	}
	cout << "1";
	return 0;
	
	//for (int i = 1; i <= N; i++) cout << lv[i] << " ";

}*/