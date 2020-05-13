/*#include<iostream>
#include<stack>


using namespace std;

stack<pair<int,int>> s;
int a[100001];
int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];
	int ans = 0;
	s.push({ 0,0 });
	for (int i = 1; i <= n+1; i++) {
		//cout << i << "\n";
		if (s.empty())s.push({ a[i] ,i});
		else {
			if (s.top().first > a[i]) {

				int temp = 1e9 + 1;
				int nulbi = 0;
				while (!s.empty()) {

					if (s.top().first <= a[i])break;
					if (temp > s.top().first)temp = s.top().first;
					s.pop();
					int idx = i - s.top().second-1;
					nulbi = temp * idx;
					if (ans < nulbi)ans = nulbi;
				}
				s.push({a[i], i});
			}
			else s.push({ a[i] ,i});
		}

	}

	cout << ans;
	return 0;
}
*/