/*
#include<iostream>
#include<string>
#include<set>
#define ALPHA 26
using namespace std;

int char_to_int(char c) {
	return c - 'a';
}
class Trie {
public:
	bool is_terminal;
	Trie* child[ALPHA];
	Trie():is_terminal(false) {
		for (int i = 0; i < ALPHA; i++)
			child[i] = NULL;
	}
	void insert(const char* key) {
		if (*key == '\0')is_terminal = true;
		else {
			int idx = char_to_int(*key);
			if (child[idx] == NULL) {
				child[idx] = new Trie();
			}
			child[idx]->insert(key + 1);
		}
	}

	Trie* find(const char* key) { //key 가 query 임 . 즉 query가 먼저 다 끝나면(==prefix를 찾은것) 주소값 반환
		if (*key == 0) {
			return this;
		}

		int idx = char_to_int(*key);
		if (child[idx] == NULL)return NULL; //내가 찾는 Query(Prefix)가 트라이에 없다면
		return child[idx]->find(key + 1);
	}

	bool string_exist(const char* key) {
		if (*key == 0 && is_terminal)return true; // query와 trie가 동시에 끝나야만 full string이다 라는 의미.
		int idx = char_to_int(*key);
		if (child[idx] == NULL)return false; //내가 찾는 Query(Full String)가 트라이에 없다면
		return child[idx]->string_exist(key + 1);
	}

};
int main() {
	int n, m;
	ios_base::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	string s;
	Trie* trie = new Trie();

	for (int i = 0; i < n; i++) {
		cin >> s;
		trie->insert(s.c_str());
	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (trie->string_exist(s.c_str()))ans++;
	}
	cout << ans;
}
*/