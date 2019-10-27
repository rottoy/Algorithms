/*#include<iostream>
//주의 : D[i] : i까지의 연속합 이 아니다!
//D[i] : "i로 끝나는" i까지의 연속합이다! 둘은 엄청난 차이이다!
using namespace std;

int D[100001];
int A[100001];
int max(int a, int b) { return a > b ? a : b; };
int main() {


	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		cin >> A[i];
	}
	D[1] = A[1];
	for (int i = 1; i <= n; i++) {
	
		if (A[i] + D[i - 1] > 0) {
			D[i] = A[i] + D[i - 1];
		}
		else
		{
			D[i] = 0;
		}
	}

	int result = -1000000000;
	for (int i = 1; i <= n; i++) {
		if (D[i] == 0) D[i] = A[i];
		result = max(result, D[i]);
		
	}
	cout << result;
	return 0;
}*/