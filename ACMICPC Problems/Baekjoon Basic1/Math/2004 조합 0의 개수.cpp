/*#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
ll gc(ll n,ll x) {
	ll sum = 0;
	ll idx = 1;
	while (true) {
		if (ll(pow(x, idx)) > n)break;
		sum += n/pow(x,idx++);
	}
	return sum;
}
ll min(ll a, ll b) { return a < b ? a : b; }
int main() {
	ll n, m;
	cin >> n >> m;
	cout << min(gc(n, 2) - gc(m, 2) - gc(n - m, 2), gc(n, 5) - gc(m, 5) - gc(n - m, 5));
	return 0;
}*/