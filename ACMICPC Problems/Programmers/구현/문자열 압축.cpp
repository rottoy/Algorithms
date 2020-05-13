/*
#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(string s) {
	int answer = 0;
	int len = s.length();
	answer = len;
	for (int i = 1; i < len; i++) {
		string prev = "";
		string all = "";
		string dung = "";
		int idx = 1;
		for (int j = 0; j < len; j += i) {
			string temp = s.substr(j, i);
			//cout << temp << " ";
			if (prev == "") { prev = temp; continue; }
			else if (prev == temp) {

				idx++;
				prev = temp;
			}
			else {
				if (idx == 1) {
					dung += prev;
					all += dung;
					dung = "";
				}
				else {
					dung += prev;
					dung = to_string(idx) + dung;
					all += dung;
					dung = "";
					idx = 1;
				}
				prev = temp;
			}
		}
		dung += prev;
		if (idx != 1)
			dung = to_string(idx) + dung;
		all += dung;
		//cout << all << "\n";
		//cout << "\n";
		if (answer > all.length())answer = all.length();

	}

	return answer;
}
int main() {

	solution("aabbaccc");

}
*/