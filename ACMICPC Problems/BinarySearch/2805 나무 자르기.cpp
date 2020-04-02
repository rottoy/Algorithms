/*#include<iostream>

using namespace std;
int a[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int M = -1;
	for (int i = 0; i < n; i++) { cin >> a[i]; if (M < a[i])M = a[i]; }
	//다 자르면 62 요구하는 m은 7. 현재 curm이 m보다 작으면 높이를 낮추고 curm이 m보다 크면 높이를 높여라.
	int s = 0, e = M;
	long long ans = 0;
	while (s <= e) {
		long long mid = (s + e) / 2;
		long long curm = 0;
		for (int i = 0; i < n; i++) {
			if(a[i]>mid)
			curm += (a[i] - mid);
		}
		if (curm >= m) { s = mid + 1; if(ans<mid)ans = mid; }
		else { e = mid - 1; }
	}
	cout << ans;
	return 0;
}*/