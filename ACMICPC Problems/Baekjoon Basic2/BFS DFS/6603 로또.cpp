/*#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
void lotto(int count, int index);

int a,b[104]; //a는 k, b는 k개의 수, 카운터를 넣어두기.
int answer[14]; // 정답 인덱스

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	while (cin >> a && a) {
		
		for (int i = 0; i < a; i++) {
			cin >> b[i];
		}
		// dfs, 즉 카운트가 6개 되면 그냥 나가면 되는 느낌으로 풀면 될 듯.
		// 그러기 위해선 카운트랑 인덱스를 넘겨주면 됨.
		int count = 0;
		int index = 1;
		lotto(count, index);

		cout << "\n";

	}
	return 0;
}

void lotto(int count, int index) {
	if (count == 6) { //count가 6일때 정답 index를 출력. 
		for (int i = 0; i < 6; i++) {
			//printf("%d ", b[answer[i]]);
			cout << b[answer[i]] << " ";

		}
		cout << "\n";
		return;

	}
	for (int i = index; i <= a; i++) {
		answer[count] = i - 1;
        lotto(count + 1, i + 1);
		
	}
}*/

