#include<iostream>
/*#include<algorithm>
using namespace std;
int a[500001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	sort(a, a + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		int s=0, e=n-1;
		bool isp = false;
		while (s <= e) {
			int mid = (s + e) / 2;
			//cout << s << mid << e << "\n";

			if (x == a[mid]) { isp = true; cout << "1 "; break; }
			if (x>a[mid])s = mid + 1;
			else e = mid - 1;
		}
		if(!isp)cout << "0 ";
	}
	return 0;
}*/