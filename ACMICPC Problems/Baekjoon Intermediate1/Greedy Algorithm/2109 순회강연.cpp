/*#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
priority_queue<pair<int, int>> q;


int main() {

	int n,bm=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		q.push({b,a});
		if (bm < b)bm = b;
	}
	priority_queue<int> pq;
	long long ans = 0;
	//int k = 0;
	int prev = -1;
	while(!q.empty()){
		if (prev == -1)q.top().first;
		auto z = q.top(); q.pop();
		if (prev == z.first) {
			pq.push(z.second);
			prev = z.first;
		}
		else {
			if (!pq.empty()) {
				ans += pq.top();
				pq.pop();
			}
		}
	}
	cout << ans;
	return 0;
}*/