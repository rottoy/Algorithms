/*#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<memory.h>
#define mod 1000000007L
using namespace std;
typedef long long ll;
vector<int> v[301];
ll dp[301][301];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		memset(dp, 0, sizeof(dp));
		int n, h;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> h;
			for (int j = 1; j*j <= h; j++) {
				if (j*j == h) { v[i].push_back(j); }
				else if (h%j == 0) {
					v[i].push_back(j);
					v[i].push_back(h / j);
				}
			}
			sort(v[i].begin(), v[i].end());
		}

		for (int i = 0; i < v[0].size(); i++)dp[0][i] = 1;
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < v[i].size(); j++) {
				for (int k = 0; k < v[i - 1].size(); k++) {
					if (v[i][j] >= v[i - 1][k]) {
						dp[i][j] += (dp[i - 1][k]) % mod;
					}
				}
			}
		}
		ll ans = 0;

		for (int i = 0; i < v[n - 1].size(); i++) ans = (ans+dp[n - 1][i]) % mod;

		cout << ans << "\n";
		for (int i = 0; i < n; i++) { v[i].clear(); }
	}
	return 0;
}
*/