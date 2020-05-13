/*
#include <string>
#include <vector>
#include<iostream>
using namespace std;
string sub(string ll) {
	string temp = ll.substr(1, ll.length() - 2);
	for (int i = 0; i < temp.length(); i++) {
		temp[i] = (temp[i] == '(') ? ')' : '(';
	}
	return temp;
}
bool isright(string ll) {
	int idx = 0;
	for (int i = 0; i < ll.length(); i++) {
		if (ll[i] == '(')idx++; else idx--;
		if (idx < 0)return false;
	}
	if (idx != 0)return false;
	else return true;
}
string makeright(string p) {
	if (p == "")return p;
	int l = 0, r = 0;
	int idx = 0;
	string ll = "";
	for (int i = 0; i < p.length(); i++) {
		if (p[i] == '(')l++; else r++;
		ll += p[i];
		if (l == r) { idx = i; break; }
	}
	string rr = "";
	if (idx + 1 != p.length())
		rr = p.substr(idx + 1, p.length());
	//cout << ll<<" "<<rr<<"\n";
	if (isright(ll)) {
		return ll + makeright(rr);
	}
	else {
		return "(" + makeright(rr) + ")" + sub(ll);
	}
}
string solution(string p) {
	string answer = "";
	answer = makeright(p);
	//cout << answer;
	return answer;
}

int main() {

	solution("()))((()");
}
*/