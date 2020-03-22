/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second) return true;
	else if (a.second == b.second) return a.first < b.first;
	else return false;
}
vector<pair<int, int>> v;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		v.push_back({a,b});
	}

	sort(v.begin(), v.end(),cmp);
	for (int i = 0; i < n; i++) printf("%d %d\n", v[i].first, v[i].second);
	return 0;
}*/