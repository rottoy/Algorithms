/*#include<iostream>

//D[i] = A[1],..., A[i]까지 수열이 있을 때, A[i]를 마지막으로 하는 가장 긴 증가하는 부분수열의 길이
//내가 생각했던 d[i]와 정의가 틀림. A[i]가 무조건 포함되 있어야 함.

//가장 긴 부분수열을 A[?] , A[?]...,A[j] , A[i]라고 해보자. (j는 i직전이지만, 부분 수열 이므로 i-1은 아님. )
//D[i] = MAX(D[j])+1 , j<i , A[j] < A[i]

using namespace std;


int D[1001];
int A[1001];

int max(int a, int b) { return a > b ? a : b; }
int main() {


	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		
		cin >> A[n-i];
	}
	//D[1] = A[1];
	for (int i = 1; i <= n; i++) {
		D[i] = 1;
		for (int j = 1; j < i; j++) {

			if (A[i] > A[j] && D[i] < D[j] + 1) { // 가장 긴 : D[i] < D[j]+1 , 증가하는 : A[i] > A[j], 가장 큰 :D[i] < D[j]+A[i]

				D[i] = D[j] + 1;
				//cout << i << "번째 , " << j << "번째" << endl;
				//cout << D[i] << endl;
			}
		}


	}
	int result = 0;
	for (int i = 1; i <= n; i++) {
		//cout << D[i] << endl;
		result = max(result, D[i]);
	}
	cout << result;

	return 0;

}*/