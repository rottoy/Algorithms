/*
#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(vector<int> stones, int k) {
	int answer = 0;
	int m = 2e9 + 1, M = -1;

	for (auto i : stones) {
		if (M < i)M = i;
		if (m > i)m = i;
	}
	int mid;
	int a = 0;
	while (m <= M) {
		mid = (m + M) / 2;

		int v[200001] = {};
		for (int i = 0; i < stones.size(); i++) {
			v[i] = stones[i] - (mid - 1);

		}

		int cnt = 0; bool isp = false; int cmax = 0;
		for (int i = 0; i < stones.size(); i++) {
			if (v[i] <= 0)cnt++;
			else cnt = 0;
			if (cmax < cnt)cmax = cnt;
		}
		if (cmax >= k)M = mid - 1;
		else { m = mid + 1; answer = mid; }
	}

	return answer;
}
*/