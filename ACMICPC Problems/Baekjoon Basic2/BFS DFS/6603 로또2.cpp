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
void DFS(int idx, int depth) { //DFS�� ù��° ���� : idx���� Ž�� ������ �Ұ���. �� ���տ� ���̴� ������.

	if (depth == M) {
		Print();
	}

	for (int i = idx; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			v.push_back(A[i]);
			//DFS(1, depth + 1);  // ������ ���� ���� ����, �׻� ���� Ž���̱� ������ Ž�� idx=1 �� �����Ѵ�.
			DFS(i, depth + 1); // ������ ���� ���� ����, ���� ���ں��� �׻� ū ���� ���;� �ϹǷ�(0~i-1�� ������)
								// ù��° ���ڿ� i�� ����. �̷��� ���� 1 3 2 �̷� ��찡 �ȳ���.
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


