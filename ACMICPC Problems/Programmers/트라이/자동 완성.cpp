/*
#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;

struct Trie {

	Trie* next[26];
	bool term;
	int childcnt[26];
	Trie() : term(false) {
		memset(next, 0, sizeof(next));
		memset(childcnt, 0, sizeof(childcnt));
	}
	void insert(const char* key) {
		if (*key == '\0')
			term = true;
		else {
			int curr = *key - 'a';
			childcnt[curr]++;
			if (next[curr] == NULL)
				next[curr] = new Trie();
			next[curr]->insert(key + 1);
		}
	}
	int find(const char* key, int idx) {
		//cout << "hi";
		int curr = *key - 'a';
		//cout << curr << " " << childcnt[curr] << "\n";
		if (curr == -97)return idx - 1;
		if (childcnt[curr] == 1)return idx;
		return next[curr]->find(key + 1, idx + 1);
	}


};
int solution(vector<string> s) {
	int answer = 0;
	Trie * root = new Trie;
	for (int i = 0; i < s.size(); i++) {
		const char * temp = s[i].c_str();
		int idx = 0;

		root->insert(temp);
	}
	for (int i = 0; i < s.size(); i++) {
		const char * temp = s[i].c_str();
		answer += root->find(temp, 1);
		//cout << root->find(temp, 1);
	}
	cout << answer;
	return answer;
}
int main() {
	vector<string> s = { "abc","def","ghi","jklm" };

	solution(s);
}
*/