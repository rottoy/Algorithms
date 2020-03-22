/*#include<iostream>
#include<string>
using namespace std;

char A[1001][51];
int ans = 0;
int alphabet[51][26];
int main() {

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
			alphabet[j][A[i][j] - 'A']++;
		}
	}
	string s="";
	int ham = 0;
	for (int i = 0; i < m; i++) {
		int temp = 0;
		int idx = 0;
		for (int j = 0; j < 26; j++) {
			if (temp < alphabet[i][j]) { temp = alphabet[i][j]; idx = j; }
		}
		s += char(idx + 'A');
		ham +=( n - alphabet[i][idx]);
	}
	cout << s<<endl;
	cout << ham;
	return 0;
}*/