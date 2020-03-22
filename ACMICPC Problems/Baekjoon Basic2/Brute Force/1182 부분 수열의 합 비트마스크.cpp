/*#include<iostream>

using namespace std;
int A[21];
int main() {

	int N,S,cnt=0;
	cin >> N >> S;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 1; i < (1<<N); i++) {
		int sum = 0;
		for (int k = 0; k < N; k++) {
			if (i&(1<<k))
				sum += A[k];
		}
		//cout << sum << endl;
		if (sum == S) cnt++;
	}
	cout << cnt;
}*/