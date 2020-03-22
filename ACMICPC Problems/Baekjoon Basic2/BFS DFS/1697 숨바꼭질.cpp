/*
1697 ���ٲ���
BFS�� ������ �ִܰŸ� Ž�� ����

Q1. �迭 ����� �Ұ����ϴ�?
�־��� N �� K�� �ʸ����ε� 2�������� �迭 ������ �Ұ����ϴ�.

���� ���� �迭�� ������� �ʰڴ�.
1������ �����ϹǷ� �湮 ���� �Ǻ� ���� visited�� �ִ� �Ÿ� �Ǻ� dist 1���� �迭 2������ ����� ���̴�.

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