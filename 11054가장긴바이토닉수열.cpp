/*#include<iostream>

//D[i] = A[1],..., A[i]���� ������ ���� ��, A[i]�� ���������� �ϴ� ���� �� �����ϴ� �κм����� ����
//���� �����ߴ� d[i]�� ���ǰ� Ʋ��. A[i]�� ������ ���Ե� �־�� ��.

//���� �� �κм����� A[?] , A[?]...,A[j] , A[i]��� �غ���. (j�� i����������, �κ� ���� �̹Ƿ� i-1�� �ƴ�. )
//D[i] = MAX(D[j])+1 , j<i , A[j] < A[i]

using namespace std;


int Dinc[1001];
int Ddec[1001];
int D[1001];
int A[1001];
int B[1001];
int max(int a, int b) { return a > b ? a : b; }
int main() {


	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {

		cin >> A[i];
		B[n + 1 - i] = A[i];
	}
	
	for (int i = 1; i <= n; i++) {
		Dinc[i] = 1;
		Ddec[i] = 1;
		for (int j = 1; j < i; j++) {

			if (A[i] > A[j] && Dinc[i] < Dinc[j] + 1) { // ���� �� : D[i] < D[j]+1 , �����ϴ� : A[i] > A[j], ���� ū :D[i] < D[j]+A[i]

				Dinc[i] = Dinc[j] + 1;
			}
			if (B[i] > B[j] && Ddec[i] < Ddec[j] + 1) { // ���� �� : D[i] < D[j]+1 , �����ϴ� : A[i] > A[j], ���� ū :D[i] < D[j]+A[i]

				Ddec[i] = Ddec[j] + 1;
			}

		}


	}
	int result = 0;
	for (int i = 1; i <= n; i++) {
		//cout << i << "��° Dinc : " << Dinc[i] << endl;
		//cout << i << "��° Ddec : " << Ddec[n+1-i] << endl;
		result = max(result, Dinc[i]+Ddec[n+1-i]-1);
	}
	cout << result;

	return 0;

}*/