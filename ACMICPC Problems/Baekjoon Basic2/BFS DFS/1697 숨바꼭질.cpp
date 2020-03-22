/*
1697 숨바꼭질
BFS를 응용한 최단거리 탐색 문제

Q1. 배열 사용이 불가능하다?
주어진 N 과 K가 십만개인데 2차원으로 배열 선언이 불가능하다.

따라서 정점 배열은 사용하지 않겠다.
1차원만 가능하므로 방문 여부 판별 변수 visited와 최단 거리 판별 dist 1차원 배열 2가지만 사용할 것이다.

*/
/*
#include<iostream>
#include<queue>
using namespace std;

bool visited[200003];
int dist[200003];
queue<int> q;
int N, K;
void BFS() {
	visited[N] = true;
	q.push(N);
	
	while (!q.empty()) {
		int x=q.front();
		q.pop();
		
		int arr[3] = { x - 1,x + 1,2 * x };

		
		for (int i = 0; i < 3; i++) {
			if (arr[i]<N-1 || arr[i] >2*K) continue;

			if (visited[arr[i]] == false) {
				visited[arr[i]] = true;
				dist[arr[i]] = dist[x] + 1;
				q.push(arr[i]);
			}

		}

		
	}
}


int main() {
	cin >> N >> K;
	BFS();

	cout << dist[K];
	return 0;
}*/