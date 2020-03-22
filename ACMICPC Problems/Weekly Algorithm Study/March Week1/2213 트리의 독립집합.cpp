/*
2213트리의 독립집합
핵심 : 독립집합을 구성하는 노드들은 "dp값만보고" 찾아 낼 수 있음.
그 이유는, 이미 dp값의 index에 선택했는지 안선택했는지에 대한 정보가 담겨있기 때문.
정답을 이루는 dp값의 index를 추적하며, dp0이 선택이 되었다면 그 노드를 포함시키지않고,
dp1이 선택되었다면 그 노드를 독립집합에 포함시킨다.
마지막에 독립집합을 오름차순으로 정렬한다.
*/

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v[10001];
int A[10001];
int dp[10001][2];
bool dpa[10001];
bool visited[10001];
vector<int >ans;
int max(int a, int b) { return a > b ? a : b; }
int dfs(int a) {
	visited[a] = true;
	if (dpa[a]) return max(dp[a][0], dp[a][1]); //visited로 하면 버그발생해서 따로 새로운 check 변수 선언.
	bool isp = false; //말단 노드 : isp가 false, 중간 노드 : isp가 true가 됨.
	for (int i = 0; i < v[a].size(); i++) {
		int to = v[a][i];
		if (visited[to] == false) {
			dfs(to);
			isp = true; // 하나라도 방문할 곳이있다면 true로 변경
			dp[a][0] += max(dp[to][0], dp[to][1]); // 방문 노드를 선택 '안'한 경우에는 자식 dp값의 0,1중 큰값을 선택.
			dp[a][1] += dp[to][0]; // 방문 노드를 선택한 경우에는 자식 노드가 선택되지 못하므로 dp 0 값.
		}
	}
	dp[a][1] += A[a]; //현재 노드를 선택한 경우에는 자신 가중치를 더해줌.
	dpa[a] = true;
	if (isp) return max(dp[a][0], dp[a][1]);

	//말단 노드인 경우만 올 수 있음.
	dp[a][0] = 0;  //말단인데 자신을 선택 안한 것은 0
	dp[a][1] = A[a];//말단인데 자신을 선택한 것은 자신의 가중치
	return  dp[a][1];//둘중에 큰값은 항상 dp[a][1]이므로 그 값을 return. 원래는max(dp[a][0],dp[a][1])이 맞음.
}
void trace(int now, int prev ,int included) {//현재 노드, 이전 노드, 현재 노드가 포함되어 있는가?
	if (included) {//현재노드가 포함되어있다면
		ans.push_back(now);//독립집합에 추가한다.
		for (int i = 0; i < v[now].size(); i++) {
			int to = v[now][i];
			if (to == prev)continue;//방문시 이전노드와 다음노드가 같다면 잘못 가는 것이므로 예외처리
			trace(to, now, 0); //현재가 to가 되고 이전이 now가 됨. 현재를 선택했으므로 included는 0.
		}
	}
	else { // 현재노드가 포함되어있지않으면 독립집합 추가 x
		for (int i = 0; i < v[now].size(); i++) {
			int to = v[now][i];
			if (to == prev)continue;

			if (dp[to][0] > dp[to][1]) //다음 노드가 0이 더 크다면.
				trace(to, now, 0); //0으로 재귀 호출
			else
				trace(to, now, 1); //1로 재귀 호출.
		}
	}

}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	visited[1] = true;
	cout << dfs(1) << "\n";
	if (dp[1][0] > dp[1][1]) trace(1, -1, 0);
	else trace(1, -1, 1);
	sort(ans.begin(), ans.end()); //독립집합 오름차순 정렬
	for (int i = 0; i < ans.size(); i++)cout << ans[i] << " ";

	return 0;
}*/