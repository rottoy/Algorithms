/*
1285 ���� ������
���Ʈ���� + �׸���
���� ���Ʈ������ �ϰ� �ȴٸ� O(2^40 * 400)�̹Ƿ� �ð� �ʰ��� ���� �ȴ�.
���⼭ �Ѱ��� ���̵� �ʿ��ѵ�, �� ������ �� ���� �� �����⿡ 2���� ���ӵǾ��ִ�.
��, ���� �������� �ȵ������� �����Ѵٸ�, ���� �����⿡ 1���� ���ӵǾ������Ƿ� ������ ���¸� ������ �� �ִ�.
���� ��� �࿡ ���� �������� �ȵ������� �����ϰ�(=���Ʈ����),
�� ���� ���� H�� T���� ������ ������ �ʰ�, T�� H���� ������ �������� �ȴ�.
�ð����⵵�� ���� �������� O(2^N), ���� ��������0(N^2)�̹Ƿ� �� �ð� ���⵵�� O(N^2*2^N)�̴�.
*/
/*#include<iostream>

using namespace std;
char a[21][21];
int n;
int curT = 0; int ans = 999;

bool cmp(int idx) {
	int cnt = 0;
	if (idx < n) {
		for (int i = 0; i < n; i++) {
			if (a[idx][i] == 'T')cnt++;
		}
	}
	else{
		idx -= n;
		for (int i = 0; i < n; i++) {
			if (a[i][idx] == 'T')cnt++;
		}
	}
	if (cnt > n - cnt)return true; //�������.
	else return false;
}
void flip(int idx) {
	int tcnt = 0, hcnt = 0;
	if (idx < n) {
		for (int i = 0; i < n; i++) {
			if (a[idx][i] == 'T') { a[idx][i] = 'H'; hcnt++; }
			else { a[idx][i] = 'T'; tcnt++; }
		}
	}
	else{
		idx -= n;
		for (int i = 0; i < n; i++) {
			if (a[i][idx] == 'T') { a[i][idx] = 'H'; hcnt++; }
			else { a[i][idx] = 'T'; tcnt++; }
		}
	}
	curT = curT - (hcnt-tcnt);
	return;
}
void go(int depth) {
	if (depth == n) { 
		for (int i = 0; i < n; i++) if (cmp(depth + i))flip(depth + i);
		if (ans > curT)ans = curT;
		return;
	}
		flip(depth);
		go(depth + 1);
		flip(depth);
		go(depth + 1);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j]; if (a[i][j] == 'T')  curT++; 
		}
	}
	go(0);
	cout << ans;
	return 0;
}*/