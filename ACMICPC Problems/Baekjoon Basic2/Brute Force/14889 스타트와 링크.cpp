/*#include<iostream>
#include<vector>
using namespace std;
int A[21][21];

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
		}
	}
	int ans = 99999999;
	for (int i = 0; i < (1 << N); i++) {
		vector<int> first,second;
		for (int k = 0; k < N; k++) {
			if (i&(1 << k)) { first.push_back(k); }
			else { second.push_back(k); }
		}
		if (first.size() != N / 2) continue;
		int t1 = 0, t2 = 0;
			for (int k = 0; k < N/2; k++) {
				for (int l = 0; l < N / 2; l++) {
					if (k == l) continue;
					t1 += A[first[k]][first[l]];
					t2 += A[second[k]][second[l]];
				}
			}
			int temp = t1 - t2 > 0 ? t1 - t2 : t2 - t1;
			if (ans > temp) ans = temp;
	}
	cout << ans;

	return 0;
}*/