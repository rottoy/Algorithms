/*#include<iostream>

//D[i] = A[1],..., A[i]���� ������ ���� ��, A[i]�� ���������� �ϴ� ���� �� �����ϴ� �κм����� ����
//���� �����ߴ� d[i]�� ���ǰ� Ʋ��. A[i]�� ������ ���Ե� �־�� ��.

//���� �� �κм����� A[?] , A[?]...,A[j] , A[i]��� �غ���. (j�� i����������, �κ� ���� �̹Ƿ� i-1�� �ƴ�. )
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

			if (A[i] > A[j] && D[i] < D[j] + 1) { // ���� �� : D[i] < D[j]+1 , �����ϴ� : A[i] > A[j], ���� ū :D[i] < D[j]+A[i]

				D[i] = D[j] + 1;
				//cout << i << "��° , " << j << "��°" << endl;
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