/*
1202 보석 도둑
0.multi-set이란?
 중복을 허용하는 BST이다. multi-set은 int말고도 문자열, 문자 등도 처리가능하다.
1.multi-set과 upper&lower-bound
multi-set vs 배열
○insert
 multi-set : 0(logk)
 배열 : 0(1)
○find
 multi-set : 0(logk)
 배열 : O(k)
현재 문제는 find가 최대 30만이므로 O(n) * 0(k)= 0(n^k)이 되므로 시간초과가 난다.

2.시간복잡도가 시간초과가 나는 이유(수학적 증명)
 1)전체 보석을 다 보아야 하므로 기본적으로 0(n)이 걸린다. 
 2)find는 0(n)보다 작아야 한다.
  현재 문제가 아무리 sort를 할 지라도 , 시간초과가 발생하는데 다음과 같은 예시가 있다.
  보석의 무게가 2인데, 가방의 무게가 1 , 1, 1, 1 ,.........2라고 하면, 아무리 sort를 해도, 마지막에 찾게된다.
  따라서 0(n)의 find로는 찾을 수 없다.
 
 
3.일반 자료구조와 이분탐색만으로 힘든 이유(풀 수는 있나?)
  이분탐색을 사용하면 find도 O(logn) 안에 가능하다.
  그런데, 삭제를 하여 아예 이 인덱스에 접근을 못하게끔 해야하는데, 배열에서는 이게 불가능하다.
  따라서 multi-set이라는 erase도 0(logn)에 가능하게 하는 자료구조를 사용해야 한다.
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
		int cost = z.first; int w = z.second; // w<=bag[i] 이면 가능.
		auto it =bag.lower_bound(w);
		if (it == bag.end())continue;
		bag.erase(it);
		ans += cost;
	}
	cout << ans;
	return 0;
}*/