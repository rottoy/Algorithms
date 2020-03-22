/*
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool visited[20001];
vector<pair<int, int>> v[20001]; //
priority_queue<pair<int,int>> q;
int dist[20001];
int t,e,k;
void dijk(int a) {
	dist[a] = 0;
	q.push({ 0,a });
	while (!q.empty()) {
		auto c = q.top(); int x = c.second;
		q.pop();
		if (visited[x])continue;
		visited[x] = true;
		for (int i = 0; i < v[x].size(); i++) {
			int to = v[x][i].first;
			int w = v[x][i].second;
			if (dist[to] > dist[x] + w) {
				dist[to] = dist[x] + w;
				q.push({ -dist[to],to});
			}
		}
	}

}
int main()
{
	scanf("%d %d %d", &t, &e, &k);
	for (int i = 1; i <= t; i++)dist[i] = 999999999;
	for (int i = 0; i < e; i++)
	{
		int a, b,c;
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back({ b,c });
	}
	dijk(k);
	for (int i = 1; i <= t; i++) {
		if (dist[i] >= 999999999)printf("INF\n");
		else printf("%d\n", dist[i]); 
	}
	return 0;
}
*/