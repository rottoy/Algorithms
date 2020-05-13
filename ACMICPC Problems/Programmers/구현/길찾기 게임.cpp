/*
#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;
vector<vector<int>> answer(2);

struct point {
	int x;
	int y;
	int idx;
};
bool cmp(point u, point v) {
	if (u.y == v.y) {
		return u.x < v.x;
	}
	else return u.y > v.y;
}
struct Node {
	point val;
	Node* l;
	Node* r;
	Node(point v) :val(v) {
		l = NULL;
		r = NULL;
	}
};
class Tree {
	public:
	Node* head;
	Node* getRoot() { return head; }
	Tree(point v):head(NULL) {
		if (head == NULL) {
			head = new Node(v);
		}
	}
	void insert(Node* cur,point v) {
		cout << cur << "\n";
		Node* prev = NULL;
		if (cur== NULL)return;
		while (cur != NULL) {
			prev = cur;
			if (v.x < cur->val.x) { // ¿ÞÂÊ¿¡ »ðÀÔ.
				cur = cur->l;
				
			}
			else { // ¿À¸¥ÂÊ¿¡ »ðÀÔ.
				cur = cur->r;
			}
		}
		cur = new Node(v);
		if (cur->val.x < prev->val.x) prev->l = cur;
		else prev->r = cur;


		return;
	}
	void print(Node* node,vector<vector<int>>& u,int flag) {
		if (node == NULL)return;
		if (flag == 0) {
				cout << node->val.idx<<"»ðÀÔ ¿Ï·á\n";
				u[0].push_back(node->val.idx);
				print(node->l, u,0);
				print(node->r, u,0);
		}
		else{
				print(node->l, u, 1);
				print(node->r, u, 1);
				u[1].push_back(node->val.idx);
				cout << node->val.idx << "»ðÀÔ ¿Ï·á\n";
		}
	}
};
Tree* tree;
vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
	vector<point> t(nodeinfo.size());
	
	for (int i = 0; i < nodeinfo.size(); i++) {
		t[i].x = nodeinfo[i][0];
		t[i].y = nodeinfo[i][1];
		t[i].idx = i+1;
	}
	sort(t.begin(), t.end(),cmp);

	tree= new Tree(t[0]);
	//cout << tree->getRoot();
	for (int i = 1; i < t.size(); i++) {
		tree->insert(tree->getRoot(),t[i]);
		//cout << t[i].idx << "ÀÎ¼­Æ® ¿Ï·á\n";
	}
	tree->print(tree->getRoot(),answer,0);
	tree->print(tree->getRoot(),answer,1);

	for (int i = 0; i < answer[0].size(); i++)cout << answer[0][i] << " ";
	cout << "\n";
	for (int i = 0; i < answer[1].size(); i++)cout << answer[1][i] << " ";
	return answer;
}

int main() {
	vector<vector<int>> nodeinfo = { {5,3},{11,5},{13,3},{3,5},{6,1},{1,3},{8,6},{7,2},{2,2} };
	solution(nodeinfo);
}
*/