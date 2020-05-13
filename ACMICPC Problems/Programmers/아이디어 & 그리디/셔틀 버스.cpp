/*
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
//int tt[1441];
int presum[1441];
//priority_queue<int, vector<int>, greater<int>> q;
string solution(int n, int t, int m, vector<string> timetable) {
	string answer = "";
	vector<int> crew(timetable.size());
	for (int i = 0; i < timetable.size(); i++) {
		int hh = atoi(timetable[i].substr(0, 2).c_str());
		int mm = atoi(timetable[i].substr(3, 2).c_str());
		//cout << hh * 60 + mm<<"\n";
		//tt[hh * 60 + mm]++;
		//q.push(hh * 60 + mm);
		crew[i] = hh * 60 + mm;
	}
	
	sort(crew.begin(), crew.end());
	int start_time = 540;
	int check = 0;
	int ans = 0;
	for (int z = 0; z < n; z++) {
		
		int curcrew = m;
		for (int i = check; i < crew.size(); i++) {
			
			if (crew[i] <= start_time) {
				curcrew--;
				check++;

				if (curcrew == 0)break;
			}

		}
		if (z == n - 1) {
			if (curcrew == 0)ans = crew[check - 1] - 1;
			else ans = start_time;
		}
		start_time += t;
	}


	
	
	int nh = ans / 60, nm = ans % 60;

	string sh = to_string(nh), sm = to_string(nm);
	if (nh <= 9 && nh >= 0) sh.insert(0, 1, '0');
	if (nm <= 9 && nm >= 0) sm.insert(0, 1, '0');

	sh = sh + ":" + sm;
	cout << sh;
	answer = sh;
	return answer;
}
int main() {
	vector<string> timetable = { "08:56", "08:57", "08:58", "08:59" };
	solution(2, 1, 1, timetable);
	//vector<string> timetable = { "09:10", "09:09", "08:00" };
	//solution(2, 10, 2, timetable);
	//vector<string> timetable = { "09:00", "09 : 00", "09 : 00", "09 : 00" };
	//solution(6, 1, 2, timetable);
	return 0;
}
*/