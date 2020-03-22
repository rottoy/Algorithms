
/*#include<iostream>
#include<memory.h>

using namespace std;

int DPArr[1000001];

int MIN(int a, int b, int c) {
	if (a >= b) {
		if (b >= c) {
			return c;
		}
		else {
			return b;
		}
	}
	else {
		if (a >= c) {
			return c;
		}
		else
		{
			return a;
		}
	}
}
int makeOne(int number) {
	if (number == 1) { return 0; }
	else
	{
		int A = 1000000, B = 1000000, C = 1000000;
		if (DPArr[number - 1] != -1)
		{
			A = DPArr[number - 1];
		}
		else
		{
			DPArr[number - 1] = A = makeOne(number - 1);
		}
		if (number % 2 == 0) {
			if (DPArr[number / 2] != -1)
			{
				B = DPArr[number / 2];
			}
			else
			{
				DPArr[number / 2] = B = makeOne(number / 2);
			}
		}
		if (number % 3 == 0) {
			if (DPArr[number / 3] != -1)
			{
				C = DPArr[number / 3];
			}
			else
			{
				DPArr[number / 3] = C = makeOne(number / 3);
			}
		}

		return MIN(A, B, C) + 1;
	}

}

int main() {
	memset(DPArr, -1, sizeof(DPArr));
	int N;

	cin >> N;
	int count = makeOne(N);
	cout << count;

}*/