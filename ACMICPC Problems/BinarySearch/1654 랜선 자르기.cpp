/*#include<iostream>
using namespace std;
typedef long long ll;
ll a[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k; ll M = -1;
	cin >> n>>k;
	for (int i = 0; i < n; i++) {
		cin >> a[i]; if (M < a[i])M = a[i];
	}
	ll s = 0, e = M,ans=1;
	while (s <= e) {
		ll mid = (s + e) / 2;
		ll curk = 0;
		for (int i = 0; i < n; i++) {
			if(mid!=0)
			curk += (a[i] / mid);
		}
		if (curk >= k) {
			s = mid + 1; if(ans<mid)ans = mid;
		}
		else e = mid - 1;

	}
	cout << ans;
	return 0;
}*/