/*
#include <string>
#include <vector>
#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
map<ll, ll> m;
ll find(ll cur) {
	if (!m[cur]) return cur;
	else return m[cur] = find(m[cur]);
}
vector<long long> solution(long long k, vector<long long> room_number) {
	vector<long long> answer;
	for (int i = 0; i < room_number.size(); i++) {
		ll cur = room_number[i];
		if (!m[cur]) {
			answer.push_back(cur);
			m[cur] = find(cur + 1);
		}
		else {
			ll temp = find(cur);
			answer.push_back(temp);
			m[temp] = find(temp + 1);
		}
	}

	return answer;

}
*/