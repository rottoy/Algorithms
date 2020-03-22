/*#include<iostream>
#include<math.h>

using namespace std;
int A[1001];
int Q[1001];
int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}

	int Amax = A[1];
	for (int i = 1; i <= n; i++) {
		Q[i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++) //값의 n하강
		{
			if (A[i] < A[j]) {
				cout << "i executed << : i : " << i << "   j :" << j << endl;
				if(Q[i]>=2)
				Q[i] -= 1;
			}
		}	
	
		//값의 n 상승
		int temp = 10000;
		int temp2;
		int index = -1;
		
		if (Amax < A[i])
		{
			cout << "hello"<<endl;
			index = i - 1;
			Q[i] = Q[index] + 1;

		}
		Amax = max(Amax, A[i]);
		for (int j = 1; j <= i - 1; j++) 
		{
			
			//if(A[i]==A[j])
			if (A[i] >= A[j])
			{
				temp2 = temp;
				temp = min(temp, abs(A[i] - A[j]));
				if (temp2 != temp) {
					if (A[i] > A[j]) {
						index = j;
						Q[i] = Q[index] + 1;
					}
					else
					{
						Q[i] = max(Q[i - 1], Q[j]) + 1;
					}
				}
			}
		}


	}
	int result = 0;
	for (int i = 1; i <= n; i++) {
		result = max(result, Q[i]);
		cout << Q[i] << endl;
	}
	cout << result;
	return 0;
}*/