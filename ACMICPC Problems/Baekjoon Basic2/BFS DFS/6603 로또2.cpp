/*#include<iostream>
#include<vector>
using namespace std;

bool visited[14];
int N, M;
vector<int> v;
int A[14];
void Print() {

	for (auto i : v) {
		printf("%d ", i);
	}
	printf("\n");

}
void DFS(int idx, int depth) { //DFS의 첫번째 인자 : idx부터 탐색 시작을 할것임. 즉 조합에 쓰이는 인자임.

	if (depth == M) {
		Print();
	}

	for (int i = idx; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			v.push_back(A[i]);
			//DFS(1, depth + 1);  // 순열을 쓰고 싶을 때는, 항상 완전 탐색이기 때문에 탐색 idx=1 로 설정한다.
			DFS(i, depth + 1); // 조합을 쓰고 싶을 때는, 이전 숫자보다 항상 큰 값이 나와야 하므로(0~i-1가 이전값)
								// 첫번째 인자에 i를 대입. 이렇게 쓰면 1 3 2 이런 경우가 안나옴.
			v.pop_back();
			visited[i] = false;
		}
	}
}

void Permutation() {

}
int main() {
	//cin >> N >> M;
	M = 6;
	while (cin >> N && N) {
		for (int i = 1; i <= N; i++) {
			cin >> A[i];
		}
		DFS(1, 0);
		cout << "\n";
	}

	return 0;
}*/


