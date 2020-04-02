/*
1285 동전 뒤집기
브루트포스 + 그리디
완전 브루트포스를 하게 된다면 O(2^40 * 400)이므로 시간 초과가 나게 된다.
여기서 한가지 아이디어가 필요한데, 각 동전은 각 열과 행 뒤집기에 2번씩 종속되어있다.
즉, 행을 뒤집을지 안뒤집을지 결정한다면, 열은 뒤집기에 1개가 종속되어있으므로 동전의 상태를 결정할 수 있다.
따라서 모든 행에 대해 뒤집을지 안뒤집을지 결정하고(=브루트포스),
각 열에 대해 H가 T보다 많으면 뒤집지 않고, T가 H보다 많으면 뒤집으면 된다.
시간복잡도는 행을 뒤집을때 O(2^N), 열을 뒤집을때0(N^2)이므로 총 시간 복잡도는 O(N^2*2^N)이다.
*/
/*#include<iostream>

using namespace std;
char a[21][21];
int n;
int curT = 0; int ans = 999;

bool cmp(int idx) {
	int cnt = 0;
	if (idx < n) {
		for (int i = 0; i < n; i++) {
			if (a[idx][i] == 'T')cnt++;
		}
	}
	else{
		idx -= n;
		for (int i = 0; i < n; i++) {
			if (a[i][idx] == 'T')cnt++;
		}
	}
	if (cnt > n - cnt)return true; //뒤집어라.
	else return false;
}
void flip(int idx) {
	int tcnt = 0, hcnt = 0;
	if (idx < n) {
		for (int i = 0; i < n; i++) {
			if (a[idx][i] == 'T') { a[idx][i] = 'H'; hcnt++; }
			else { a[idx][i] = 'T'; tcnt++; }
		}
	}
	else{
		idx -= n;
		for (int i = 0; i < n; i++) {
			if (a[i][idx] == 'T') { a[i][idx] = 'H'; hcnt++; }
			else { a[i][idx] = 'T'; tcnt++; }
		}
	}
	curT = curT - (hcnt-tcnt);
	return;
}
void go(int depth) {
	if (depth == n) { 
		for (int i = 0; i < n; i++) if (cmp(depth + i))flip(depth + i);
		if (ans > curT)ans = curT;
		return;
	}
		flip(depth);
		go(depth + 1);
		flip(depth);
		go(depth + 1);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j]; if (a[i][j] == 'T')  curT++; 
		}
	}
	go(0);
	cout << ans;
	return 0;
}*/