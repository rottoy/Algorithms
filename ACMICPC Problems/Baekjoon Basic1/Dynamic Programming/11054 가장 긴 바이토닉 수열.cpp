/*#include<iostream>
using namespace std;
int dinc[1001];
int ddec[1001];
int A[1001];
int B[1001];
int n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> A[i];
	dinc[1] = 1;
	ddec[1] = 1;
	for (int i = 1; i <= n; i++) B[i] = A[n - i+1];
	for (int i = 2; i <= n; i++){
		dinc[i] = 1;
		ddec[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (A[i] > A[j] && dinc[i] < dinc[j] + 1)  dinc[i] = dinc[j] + 1; 
			if (B[i] > B[j] && ddec[i] < ddec[j] + 1) ddec[i] = ddec[j] + 1;
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int temp = dinc[i] + ddec[n - i + 1]-1;
		if (ans < temp) ans = temp;
	}
	cout << ans;
	return 0;
}*/