/*
해당문제는 최소 신장 트리(MST)의 가중치 합을 구하는 문제임.
그러나 가중치가 모두 1임.
가중치가 모두 1이면, 연결 상태에 관계없이 노드가 모두 연결되기만 하면 되므로
노드가 연결될 수 있는 엣지의 갯수의 최솟값=노드의 갯수 -1 임.
*/

/*#include<iostream>
using namespace std;
int main() {

	int t,a,b;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
		}
		cout << n - 1<<"\n";
	}
}*/