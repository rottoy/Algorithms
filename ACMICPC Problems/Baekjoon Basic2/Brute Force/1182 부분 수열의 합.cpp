/*#include<iostream>

using namespace std;
int N, S;
int selected[21];
int A[21];

int cnt = 0;
void go(int index) {
	if (index > N) return;
	if (index == N) {
		int sum = 0;
		for (int i = 0; i < N; i++) {
			//cout << selected[i] << " ";
			if (selected[i])
				sum += A[i];
		}
		//cout << endl;
		if (sum == S)cnt++;
	}

	selected[index] = 1;
	go(index + 1);
	selected[index] = 0;
	go(index + 1);
}
int main() {
	cin >> N >> S;
	for (int i = 0; i < N; i++) cin >> A[i];
	go(0);
	if (S == 0)
		cout << cnt - 1;
	else
		cout << cnt;
}*/