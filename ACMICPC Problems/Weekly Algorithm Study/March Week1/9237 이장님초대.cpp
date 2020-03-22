/*#include<iostream>
#include<algorithm>
using namespace std;
int A[100001];
int m(int a, int b) { return a > b ? a : b; }
bool d(int a, int b) { return a > b; }
int main() {

	int n,a=0;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> A[i];
	sort(A+1, A + n+1,d);
	for (int i = 1; i <= n; i++) a = m(a, i+A[i]+1);
	cout << a;
}*/