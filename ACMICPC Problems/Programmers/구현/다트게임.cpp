/*
#include <string>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int solution(string dartResult) {
	int answer = 0;
	//1S2D*3T = 37
	int sum = 0;
	for (int i = 0; i < dartResult.size(); i += 2) {
		int num = (dartResult[i] - 48);
		if (dartResult[i + 1] == '0') { num = 10; i++; }
		char powc = dartResult[i + 1];
		int pownum = 0;
		if (powc == 'S')pownum = 1;
		else if (powc == 'D')pownum = 2;
		else if (powc == 'T')pownum = 3;
		int temp = int(pow(num, pownum));
		//int isidx = 0;
		if (dartResult[i + 2] == '*') {
			temp *= 2;
			i++;
			//isidx++;
		}
		else if (dartResult[i + 2] == '#') {
			temp *= -1;
			i++;
			//isidx++;
		}
		if (i + 4 < dartResult.size()) {
			if (dartResult[i + 4] == '*') {
				temp *= 2;
			}
		}
		cout << temp << "\n";
		sum += temp;
	}
	cout << sum;
	answer = sum;
	return answer;
}
int main() {

	solution("1S*2T*3S");
	//1^1 * 2 * 2 + 2^3 * 2 + 3^1
}
*/