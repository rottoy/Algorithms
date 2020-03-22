/*
#include<iostream>
#include<vector>
using namespace std;
int A[51][51];
int B[51][51];
vector<pair<int, int>> v;
vector<int> sel;
int N, M;
int answer = 1000000;
int evaluate() {
	int ans = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (A[i][j] != 1) continue;
			int temp = 1000;

			for (auto elem : sel) {
				int a1 = v[elem].first;
				int a2 = v[elem].second;
				if (a1 == i && a2 == j) continue;
				if (A[a1][a2] != 2) continue;
				int dis = abs(a1 - i) + abs(a2 - j);
				if (temp > dis) temp = dis;


			}
			ans += temp;
		}

	}
	return ans;
}
void go(int index, int start) {
	if (index == M) {
		//for (int i = 0; i < M; i++) cout << select[i] << " ";
		//cout << endl;
		int m = evaluate();
		//cout << m << endl;
		if (answer > m) answer = m;
		return;
	}
	
	for (int i = start; i<v.size(); i++) {

		sel.push_back(i);
		go(index + 1, i + 1);
		sel.pop_back();
	}
}

int main() {

	
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
		
			cin >> A[i][j];
			B[i][j] = A[i][j];
			if(A[i][j]==2)
			v.push_back(make_pair(i,j));
		}

	}
	go(0, 0);

	cout << answer;
	return 0;
}*/