/*
#include<iostream>
#include<algorithm>
#include<memory.h>
using namespace std;
int a[200001];
bool visited[200001];
int main() {

	int n,c;
	cin >> n >> c;

	for (int i = 0;i < n;i++)cin >> a[i];
	sort(a, a + n);
	int l=1, r=a[n-1];
	//1 2 4 8 9
	// 1 2 4 1
	// ������ ������ �ִ� �Ÿ� = mid
	// 4 2 1 1
	int ans = 0;
	while (l <= r) {
		memset(visited, false, sizeof(visited));
		int mid = (l + r) / 2;
		//cout << l << " " << mid << " " << r << "\n";
		int temp = 0;
		int prev = a[0];
		visited[0] = true;
		for (int i = 1;i < n;i++) {
			if (a[i] - prev >= mid) { visited[i] = true; prev = a[i]; }

		}
		int cnt = 1;
		for (int i = 1;i < n;i++)cnt += visited[i];
		//cout << cnt << "\n";
		if (c <= cnt){ //��ġ�� ����� �� - �� �ø���
			if (ans < mid)ans = mid;
			l = mid + 1;
		}
		else { // �� �Ÿ��� ��ġ �Ұ���
			r = mid - 1;
		}
	}
	cout << ans;
}
*/