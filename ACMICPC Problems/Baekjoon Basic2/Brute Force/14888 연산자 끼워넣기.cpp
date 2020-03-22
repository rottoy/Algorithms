/*#include<iostream>

using namespace std;
int A[12];
int oporder[11];
int op[4];
int N;
int mmax = -2100000000, mmin = 2100000000;
void go(int index) {
	if (index > N - 1) return;
	if (index == N - 1) {//°è»ê
		//for (int i = 0; i < N - 1; i++) cout << oporder[i] << " ";
		//cout << "\n";
		int sum = A[0];
		for (int i = 0; i < N - 1; i++) {
			if (oporder[i] == 0) sum += A[i + 1];
			if (oporder[i] == 1) sum -= A[i + 1];
			if (oporder[i] == 2) sum *= A[i + 1];
			if (oporder[i] == 3) sum /= A[i + 1];
		}
		if (mmax < sum) mmax = sum;
		if (mmin > sum)mmin = sum;
	}

	for (int i = 0; i < 4; i++) {
		if (op[i] != 0) {
			//cout << "hi : "<<i;
			op[i]--;
			oporder[index] = i;
			go(index + 1);
			op[i]++;
		}
	}
}
int main() {

	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < 4; i++) cin >> op[i];
	go(0);
	cout << mmax << endl;
	cout << mmin;
	return 0;
}*/