/*#include<iostream>

using namespace std;

int a[1001];
int main() {

	int n;
	int result = 0;
	cin >> n;
	a[1] = 1;
	a[2] = 3;
	a[3] = 5;
	for (int i = 4; i <= n; i++) {
		a[i] = 2*a[i - 2] +a[i-1];
		a[i] %= 10007;
	}

	cout << a[n];

	return 0;
}*/