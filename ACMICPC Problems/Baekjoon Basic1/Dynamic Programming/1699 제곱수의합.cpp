/*#include<iostream>
#include<math.h>
using namespace std;
int d[100001];
int min(int a, int b) { return a < b ? a : b; }
int main() {
	int n;
	d[1] = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) d[i] = 99999;
	for (int i = 1; i*i <= n; i++)d[i*i] = 1;
	for (int i = 2; i <= n; i++) {
		
		for (int j = 1; j*j < i; j++) {
			d[i] = min(d[i],d[i - int(pow(j, 2))] + 1);
		}
	}
	//for (int i = 1; i <= n; i++)cout << d[i] << " ";
	cout << d[n];
	return 0;
}*/