/*#include<iostream>

using namespace std;
int d[100001];
int A[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> A[i];

	if (n == 1) { cout << A[1]; return 0; }

	d[1] = A[1]>0?A[1]:0;
	for (int i = 2; i <= n; i++) {
		if (d[i - 1] + A[i] < 0) d[i] = 0;
		else d[i] = d[i - 1] + A[i];
	}
	int minusmax = -9999;
	for (int i = 1; i <= n; i++) {
		if (minusmax < A[i]) minusmax = A[i];
		if (A[i] >= 0) break;
		if (i == n) { cout << minusmax; return 0;}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (ans < d[i]) ans = d[i];
	}
	cout << ans;

}	*/