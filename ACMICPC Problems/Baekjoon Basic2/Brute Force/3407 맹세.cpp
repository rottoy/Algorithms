/*#include<iostream>
#include<string>
#include<memory.h>
#include<queue>
using namespace std;
bool check[50001];
bool check2[50001];
bool visited[50001];
string s;
queue<int> q;
char c1[] = { 'h', 'b', 'c', 'n', 'o', 'f', 'p', 's', 'k', 'v', 'y', 'i', 'w', 'u' };
char c2[][3] = {
	 "li", "na",  "rb", "cs", "fr", "be", "mg", "ca", "sr", "ba", "ra", "sc",  "ti", "zr", "hf", "rf", "la", "ac",
				  "nb", "ta", "db", "ce", "th", "cr", "mo",  "sg", "pr", "pa", "mn", "tc", "re", "bh", "nd",  "fe", "ru", "os",
				  "hs", "pm", "np", "co", "rh", "ir", "mt", "sm", "pu", "ni", "pd", "pt", "ds", "eu", "am", "cu", "ag" ,"au", "rg", "gd", "cm",
				  "zn", "cd", "hg", "cn", "tb", "bk", "al", "ga", "in", "tl", "dy", "cf",  "si", "ge", "sn", "pb", "fl", "ho", "es",
				   "as", "sb", "bi", "er", "fm",  "se", "te", "po", "lv", "tm", "md", "cl", "br",  "at", "yb", "no",
				  "he", "ne", "ar", "kr", "xe", "rn","lu", "lr"
};
void bfs() {
	bool flag = false;
	q.push(0);
	visited[0] = true;
	while (!q.empty()) {
		int idx = q.front();
		q.pop();

		if (idx == s.length()) {
			flag = true;
			break;
		}
		if (check[idx] && visited[idx + 1] == false) {
			visited[idx + 1] = true;
			q.push(idx + 1);
		}
		if (check2[idx] && visited[idx + 2] == false) {
			visited[idx + 2] = true;
			q.push(idx + 2);
		}
	}
	if (flag)cout << "YES\n";
	else cout << "NO\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < 14; j++) {
				if (s[i] == c1[j]) { check[i] = true; break; }
			}
			for (int j = 0; j < 100; j++) {
				if (i == s.length() - 1) break;
				if (s[i] == c2[j][0] && s[i + 1] == c2[j][1]) { check2[i] = true; break; }
			}
		}
		bfs();
		while (!q.empty())q.pop();
		memset(visited, false, sizeof(visited));
		memset(check, false, sizeof(check));
		memset(check2, false, sizeof(check2));
	}

	return 0;
}*/