/*
1202 ���� ����
0.multi-set�̶�?
 �ߺ��� ����ϴ� BST�̴�. multi-set�� int���� ���ڿ�, ���� � ó�������ϴ�.
1.multi-set�� upper&lower-bound
multi-set vs �迭
��insert
 multi-set : 0(logk)
 �迭 : 0(1)
��find
 multi-set : 0(logk)
 �迭 : O(k)
���� ������ find�� �ִ� 30���̹Ƿ� O(n) * 0(k)= 0(n^k)�� �ǹǷ� �ð��ʰ��� ����.

2.�ð����⵵�� �ð��ʰ��� ���� ����(������ ����)
 1)��ü ������ �� ���ƾ� �ϹǷ� �⺻������ 0(n)�� �ɸ���. 
 2)find�� 0(n)���� �۾ƾ� �Ѵ�.
  ���� ������ �ƹ��� sort�� �� ���� , �ð��ʰ��� �߻��ϴµ� ������ ���� ���ð� �ִ�.
  ������ ���԰� 2�ε�, ������ ���԰� 1 , 1, 1, 1 ,.........2��� �ϸ�, �ƹ��� sort�� �ص�, �������� ã�Եȴ�.
  ���� 0(n)�� find�δ� ã�� �� ����.
 
 
3.�Ϲ� �ڷᱸ���� �̺�Ž�������� ���� ����(Ǯ ���� �ֳ�?)
  �̺�Ž���� ����ϸ� find�� O(logn) �ȿ� �����ϴ�.
  �׷���, ������ �Ͽ� �ƿ� �� �ε����� ������ ���ϰԲ� �ؾ��ϴµ�, �迭������ �̰� �Ұ����ϴ�.
  ���� multi-set�̶�� erase�� 0(logn)�� �����ϰ� �ϴ� �ڷᱸ���� ����ؾ� �Ѵ�.
*/
/*
#include<iostream>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;

pair<int,int> q[300001];
multiset<int> bag;
bool isp[300001];
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		q[i] = {b,a};
	}
	for (int i = 0; i < k; i++) {
		int a; cin >> a;
		bag.insert(a);
	}
	sort(q, q + n);
	long long ans = 0;
	for(int j=n-1;j>=0;j--){
		auto z = q[j];
		int cost = z.first; int w = z.second; // w<=bag[i] �̸� ����.
		auto it =bag.lower_bound(w);
		if (it == bag.end())continue;
		bag.erase(it);
		ans += cost;
	}
	cout << ans;
	return 0;
}*/