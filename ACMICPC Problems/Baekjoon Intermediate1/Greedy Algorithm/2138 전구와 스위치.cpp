/*#include<iostream>

using namespace std;

int a[100005];
int b[100005];
int c[100005];
int min(int a, int b) { return a < b ? a : b; }
int main() {
	int n, cnt = 0;
	cin >> n;
	for (int i = 2; i < n + 2; i++) {
		scanf(" %1d", &a[i]); c[i] = a[i];
	}
	for (int i = 2; i < n + 2; i++)
		scanf(" %1d", &b[i]);

	//안누름.
	bool isp1 = false, isp2 = false;
	int ans1 = 0, ans2 = 0, ans = 9999999;
	for (int i = 2; i < n + 1; i++) {
		if (c[i] != b[i]) {
			for (int j = i; j <= i + 2; j++) {
				c[j] = 1 - c[j];
				
			}
			ans1++;
		}
		
	}
	if (c[n + 1] == b[n + 1]) isp1 = true;
	//누름.
	a[2] = 1 - a[2]; a[3] = 1 - a[3];
	for (int i = 2; i < n + 1; i++) {
		if (a[i] != b[i]) {
			for (int j = i; j <= i + 2; j++) {
				a[j] = 1 - a[j];
				
			}
			ans2++;
		}
	}
	if (a[n + 1] == b[n + 1]) { isp2 = true; ans2++; }
	if (isp1&&isp2) {
		ans = min(ans1, ans2);
	}
	else if (isp1) {
		ans = ans1;
	}
	else if (isp2) {
		ans = ans2;
	}
	else {
		ans = -1;
	}
	cout << ans;
}*/