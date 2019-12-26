/*#include<iostream>

using namespace std;

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main() {


	int t;
	
	cin >> t;
	int count = 0;
	int temp = t;
	int * outputResult = new int[t];
	while(temp--){
		int n;
		cin >> n;
		int* a = new int[n];
		int* b = new int[n];
		int* resultA = new int[n];
		int* resultB = new int[n];
		for (int i = n - 1; i >= 0; i--) {
			cin >> a[i];

		}
		for (int i = n - 1; i >= 0; i--) {
			cin >> b[i];

		}
		
		
		
		resultA[0] = a[0];
		resultB[0] = b[0];
		resultA[1] = a[1] + b[0];
		resultB[1] = b[1] + a[0];
		for (int i = 2; i < n; i++) {

		//	resultA[i] = a[i] + max(resultA[i - 2] + b[i - 1], resultB[i - 2]);
			//resultB[i] = b[i] + max(resultB[i - 2] + a[i - 1], resultA[i - 2]);
			resultA[i] = a[i] + max(resultB[i-1], resultB[i - 2]);
			resultB[i] = b[i] + max(resultA[i - 1], resultA[i - 2]);
		}
		
		
		outputResult[count++] = max(resultA[n - 1], resultB[n - 1]);
		
		
	}

	for (int i = 0; i < t; i++) {
		cout << outputResult[i] << endl;
	}

	return 0;
}*/