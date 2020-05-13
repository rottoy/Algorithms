/*
#include<iostream>
using namespace std;
int a[100001];
float sum[100001];
int main() {

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)cin >> a[i];
	sum[0] = a[0];
	for (int i = 1; i < n; i++)sum[i]= sum[i - 1] + a[i];
	int s = m;
	int e = n;
	float ans = 0;
	while (s <= e) {
		cout <<"start : "<<s<<" end : " <<e<<" \n";
		bool cond = false;
		int idx = (s + e) / 2;
		float temp = sum[idx-1]/float(idx);
		for (int i = idx-1; i < n; i++) {
			float ttemp = (sum[i] - sum[i - idx]) / float(idx);
			cout << ttemp << "\n";
			if (temp <ttemp)temp = ttemp;
		}
		if (ans < temp) { cout <<"choose : "<< idx<<"\n"; ans = temp; cond = true; }
		if (cond) {
			s = idx + 1;
		}
		else{
			e = idx - 1;
		}
	}
	cout << ans*1000;
	return 0;
}
*/