/*
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#define NUM 500
using namespace std;
bool cmp(pair<string, int>&u, pair<string, int>&v) {
	return u.first < v.first;
}
class Trie {
		
	public : 
		Trie *children[NUM];
		vector<pair<string, int>> child; // 이게코드냐? 
		string name;
		int child_count;
	Trie():name(""),child_count(0) {
		for (int i = 0; i < NUM; i++)children[i] = NULL;
	}
	Trie(string a):name(a),child_count(0){
		for (int i = 0; i < NUM; i++)children[i] = NULL;
	}
	int find(string subdir) {
		if (child_count == 0)return -1;
		for (int i = 0; i < child_count; i++) {
			if (children[i]->name == subdir)return i;
		}
		return -1;
	}
	void showchild(int depth) {
		if (child_count == 0)return;
		sort(child.begin(), child.end(),cmp);
		for (int i = 0; i < child.size(); i++) {
			for (int a = 0; a < depth; a++)cout << " ";
			cout << child[i].first<<"\n";
			children[child[i].second]->showchild(depth + 1);
		}
	}
	void insert(string dir) {
		if (dir == "")return;
		int idx = 0;
		while (dir[idx] != '\\' && dir[idx]!='\0') { idx++; }

		//find if children exist, find returns integer of index children
		string cur = dir.substr(0, idx);
		string next = dir.erase(0, idx + 1);
		int temp = find(cur);
		
		if (temp == -1) {
			
			children[child_count] = new Trie(cur);
			child.push_back({ cur,child_count });
			if (next != "")
				children[child_count]->insert(next);
			child_count++;
		}
		else {
		
			if (next != "")
				children[temp]->insert(next);
		}
	}
};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Trie head;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		head.insert(s);
	}
	head.showchild(0);
}
*/