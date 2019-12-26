/*#include<iostream>

using namespace std;

int D[301];
int A[301];
int max(int a, int b) { return a > b ? a : b; };
int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {

		cin >> A[i];
	}

	D[1] = A[1];
	D[2] = A[1] + A[2];
	for (int i = 3; i <= n; i++) {

		D[i] = max(A[i - 1] + D[i - 3], D[i - 2]) + A[i];
	}


	cout << D[n];
	return 0;
}*/