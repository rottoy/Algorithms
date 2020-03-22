/*#include<iostream>

using namespace std;

int d[1001];
int A[1001];
int max(int a, int b) { return a > b ? a : b; }
int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> A[i];
	d[1] = 1;

	for (int i = 2; i <= n; i++) {
		d[i] = 1;
		for (int j = 1; j < i; j++) if (A[i] < A[j]) d[i] = max(d[i], d[j] + 1);
	}
	int ans = 1;
	for (int i = 1; i <= n; i++) if (ans < d[i]) ans = d[i];
	cout << ans;
	return 0;

}*/