/*#include<iostream>
#include<algorithm>
#include<math.h>
typedef long long ll;
using namespace std;
ll a[100001];
ll max(ll a, ll b) { return a < b ? a : b; }
int main() {
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++)  cin >> a[i];
	sort(a, a + n);
	ll temp = -ll(pow(2,62))-1;
	int cnt = 0;
	int pre_cnt = -1;
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		if (temp < a[i]) {
			if (pre_cnt < cnt) {
				pre_cnt = cnt;
				ans = a[i-1];
			}
			temp = a[i]; 
			cnt = 1; 
			continue;
		}
		if (temp == a[i]) { cnt++; }
	}
	if (pre_cnt < cnt)ans = a[n - 1];
	if (n == 1) { cout << a[0]; return 0; }
	cout << ans;
}*/