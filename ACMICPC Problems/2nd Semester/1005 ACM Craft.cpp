/*
#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;
int cost[1001];
int degree[1001];
int result[1001];
vector<int> v[1001];
int n, k,d;
struct st {
	int node;
	int t;
};
struct cmp {
	bool operator()(st &u, st &v) { return u.t > v.t; }
};
void topology() {
	priority_queue<st,vector<st>,cmp>q;
	for (int i = 1; i <= n; i++) {
		if (degree[i] == 0)q.push({ i,cost[i] });
	}

	for (int i = 1; i <= n; i++) {
		if (q.empty()) { // 사이클 발생
			return;
		}
		
		auto z = q.top(); q.pop();
		int node = z.node, t = z.t;
		result[node] = t;
		for (int i = 0; i < v[node].size(); i++) {
			int to = v[node][i];
			if (--degree[to] == 0)q.push({ to ,t+cost[to]});
		}
	}


}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		memset(cost, 0, sizeof(cost));
		memset(degree, 0, sizeof(degree));
		memset(result, 0, sizeof(result));
		for (int i = 1; i <= n; i++)v[i].clear();
		cin >> n >> k;
		for (int i = 1; i <= n; i++)cin >> cost[i];
		for (int i = 0; i < k; i++) {
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			degree[b]++;
		}
		cin >> d;
		topology();
		cout << result[d] << "\n";
	}
	return 0;
}
*/