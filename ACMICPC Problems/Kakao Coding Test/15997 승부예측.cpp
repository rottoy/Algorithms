/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<float> v[4];
int main() {

	string s1, s2, s3, s4; //v0,v1,v2,v3
	cin >> s1 >> s2 >> s3 >> s4;
	for (int i = 0; i < 6; i++) {
		string t1, t2; float w, d, l;
		cin >> t1 >> t2 >> w >> d>> l;
		float w1 = 0;
		float w2 = 0;
		w1 = 3 * w + 1 * d;
		w2 = 3 * l+  1 * d;
		if (t1 == s1) {
			v[0].push_back(w1);
			if (t2 == s2) {
				v[1].push_back(w2);
			}
			if (t2 == s3) {
				v[2].push_back(w2);
			}
			if (t2 == s4) {
				v[3].push_back(w2);
			}
		}
		else if (t1 == s2) {
			v[1].push_back(w1);
			if (t2 == s1) {
				v[0].push_back(w2);
			}
			if (t2 == s3) {
				v[2].push_back(w2);
			}
			if (t2 == s4) {
				v[3].push_back(w2);
			}

		}
		else if (t1 == s3) {
			v[2].push_back(w1);
			if (t2 == s1) {
				v[0].push_back(w2);
			}
			if (t2 == s2) {
				v[1].push_back(w2);
			}
			if (t2 == s4) {
				v[3].push_back(w2);
			}
		}
		else
		{
			v[3].push_back(w1);
			if (t2 == s1) {
				v[0].push_back(w2);
			}
			if (t2 == s2) {
				v[1].push_back(w2);
			}
			if (t2 == s3) {
				v[2].push_back(w2);
			}
		}
	}
	float s[4] = { 0,0,0,0 };
	int grade[4] = { 0,0,0,0 };
	int g_c[4] = { 0,0,0,0 };
	double ans[4] = { 0,0,0,0 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			//cout << v[i][j] << endl;
			s[i] += v[i][j];
		}
	}
	int max = 0;
	
	for (int i = 0; i < 4; i++) {
		float temp = s[i];
		for(int j = 0; j < 4; j++) {
			if (temp< s[j]) {  grade[i]++; }
		}
	}
	for (int i = 0; i < 4; i++) { g_c[grade[i]]++; }
	//순위 정하기
	//1순위가 혼자면 무조건 1 . 1순위인데 2명이 같아도 무조건 1, 1순위인데 3명이 같으면 2/3 1순위인데 4명이 같으면 0.5
	//2순위가 혼자면 무조건 1 . 2순위인데 2명이 같으면 0.5 2순위인데 3명이 같으면 1/3
	//3,4순위는 0.
	for (int i = 0; i < 4; i++) { cout << s[i] << " "; }
	cout << endl;
	for (int i = 0; i < 4; i++) { cout << grade[i] << " "; }
	cout << endl;
	for (int i = 0; i < 4; i++) { cout << g_c[i] << " "; }
	cout << endl;
	grade[0] = 0;
	grade[1] = 0;
	grade[2] = 0;
	grade[3] = 3;
	g_c[0] = 3;
	g_c[1] =0;
	if (g_c[0] == 4){
		for (int i = 0; i < 4; i++) ans[i] = 0.5f;

	}
	else if (g_c[0] == 3) {
		for (int i = 0; i < 4; i++) {
			if (grade[i] == 0) ans[i] = float(2) / float(3);
			else ans[i] = 0;
		}
		
	}
	else if (g_c[0] == 2) {
		for (int i = 0; i < 4; i++) {
			if (grade[i] == 0) ans[i] =1;
			else ans[i] = 0;
		}
	}
	else if (g_c[0] == 1) {
		if (g_c[1] == 1) {
			for (int i = 0; i < 4; i++) {
				if (grade[i] == 0 || grade[i]==1) ans[i] = 1;
				else ans[i] = 0;
			}
		}
		else if (g_c[1] == 2) {
			for (int i = 0; i < 4; i++) {
				if (grade[i] == 0) ans[i] = 1;
				else if(grade[i]==1)ans[i] = 0.5f;
				else ans[i] = 0;
			}
		}
		else if (g_c[1] == 3) {
			for (int i = 0; i < 4; i++) {
				if (grade[i] == 0) ans[i] = 1;
				else if (grade[i] == 1)ans[i] = float(1)/float(3);
				else ans[i] = 0;
			}
		}
	}
	for (int i = 0; i < 4; i++)printf("%.18lf\n",ans[i]);
	return 0;
}*/