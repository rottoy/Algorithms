/*#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
void lotto(int count, int index);

int a,b[104]; //a�� k, b�� k���� ��, ī���͸� �־�α�.
int answer[14]; // ���� �ε���

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	while (cin >> a && a) {
		
		for (int i = 0; i < a; i++) {
			cin >> b[i];
		}
		// dfs, �� ī��Ʈ�� 6�� �Ǹ� �׳� ������ �Ǵ� �������� Ǯ�� �� ��.
		// �׷��� ���ؼ� ī��Ʈ�� �ε����� �Ѱ��ָ� ��.
		int count = 0;
		int index = 1;
		lotto(count, index);

		cout << "\n";

	}
	return 0;
}

void lotto(int count, int index) {
	if (count == 6) { //count�� 6�϶� ���� index�� ���. 
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

