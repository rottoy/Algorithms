/*
#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int dp[1005][1005];
stack<char> sans;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 1; i <=s1.length(); i++) {
	for (int j = 1; j <=s2.length(); j++) {
		dp[i][j] = max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+(s1.at(i-1)==s2.at(j-1))});
	}
	}
	int temp = dp[s1.length()][s2.length()];
	int i = s1.length();
	int j = s2.length();
	while (dp[i][j]!=0) {

		if (dp[i][j] == dp[i][j-1])j -= 1;
		else if (dp[i][j] == dp[i-1][j])i -= 1;
		else {	
			if (dp[i][j] - 1 == dp[i - 1][j - 1]) { sans.push(s1[i - 1]); }
			i -= 1; j -= 1;
		}
	}
	cout << dp[s1.length()][s2.length()]<<"\n";
	while (!sans.empty()) { cout << sans.top(); sans.pop(); }
	return 0;
}
*/