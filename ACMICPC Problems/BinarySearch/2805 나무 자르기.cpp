/*#include<iostream>

using namespace std;
int a[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int M = -1;
	for (int i = 0; i < n; i++) { cin >> a[i]; if (M < a[i])M = a[i]; }
	//�� �ڸ��� 62 �䱸�ϴ� m�� 7. ���� curm�� m���� ������ ���̸� ���߰� curm�� m���� ũ�� ���̸� ������.
	int s = 0, e = M;
	long long ans = 0;
	while (s <= e) {
		long long mid = (s + e) / 2;
		long long curm = 0;
		for (int i = 0; i < n; i++) {
			if(a[i]>mid)
			curm += (a[i] - mid);
		}
		if (curm >= m) { s = mid + 1; if(ans<mid)ans = mid; }
		else { e = mid - 1; }
	}
	cout << ans;
	return 0;
}*/