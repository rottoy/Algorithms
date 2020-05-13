/*
#include<string>
#include<vector>
#include<map>
#include<iostream>

using namespace std;

map<string, int> m;
vector<int> solution(string msg) {
	vector<int> answer;
	int cur = 27;
	for (int i = 1; i <= 26; i++) {
		string cc = "";
		cc += (i - 1 + 65);
		//cout << cc << "\n";
		m[cc] = i;
	}
	for (int i = 0; i < msg.length(); i++) {
		if (i == msg.length() - 1) {
			string temp = "";
			temp += msg[i];
			answer.push_back(m[temp]);
		}
		else {
			string temp = "";
			//cout << i << "\n";
			int idx = i;
			temp += msg[idx++];
			//cout << temp << "\n";
			int prev = m[temp];
			//cout << prev;
			while (true) {
				if (m[temp] == 0) {
					m[temp] = cur++;
					//cout << m[temp] << "\n";
					break;
				}
				else {
					prev = m[temp];
					temp += msg[idx++];

				}
			}
			i = idx - 2;
			answer.push_back(prev);
		}
	}
	for (int i = 0; i < answer.size(); i++)cout << answer[i] << " ";
	return answer;
}
int main() {

	//solution("ABABABABABABABAB");
	return 0;
}
*/