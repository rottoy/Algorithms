/*
#include<iostream>
#include<algorithm>

using namespace std;
typedef long long ll;

int a[10001];
int main() {
	int n;
	ll m;
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 0;i < n;i++)cin >> a[i];
	cin >> m;
	sort(a, a + n);

	int l = 0;
	int r = a[n - 1];
	int ans = 0;
	while (l <= r) {
		int mid = (l + r) / 2;
		//cout << l << " " << mid << " " << r << "\n";
		ll sum = 0;
		for (int i = 0;i < n;i++) {
			sum = sum+ (a[i] > mid ? mid : a[i]);
		}
		//cout << sum << "\n";
		if (sum > m){ //상한액 초과의 요청
			r = mid- 1;
		}
		else { // 상한액 이하의 요청 sum<=m
			
			if(ans<mid)ans = mid;
			l = mid+ 1;
		}
	}
	cout << ans;
}
*/