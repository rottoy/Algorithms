/*
#include<iostream>
#include<string>
using namespace std;
int n;
int a[81];
bool evaluate(int depth,int x) {
	if (depth < 1) return true; //비교할 대상이 없으므로 무조건 true;
	a[depth] = x;
	for (int j = 0; j < depth / 2; j++){
		string s1, s2;
		for (int i = depth; i >= depth - j; i--)s1 = to_string(a[i]) + s1;
		for (int i = depth-j-1; i >= depth - 2*j-1; i--)s2 = to_string(a[i]) + s2;

		if (s1==s2) {  return false; }
	}
	return true;
}
void dfs(int depth,int cur) {
	if (depth-1 == n) {
		for (int i = 1; i< n+1; i++)cout << a[i];
		exit(0);
	}
	for (int i = 1; i <= 3; i++) {
		if (evaluate(depth, i)) {
			a[depth] = i;
			dfs(depth + 1, i);
		}
	}
}
int main() {
	cin >> n;
	dfs(0,0);
	return 0;
}*/