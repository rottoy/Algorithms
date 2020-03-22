/*
6 6
0 0 0 0 0 0
0 2 0 0 0 0
0 0 0 0 6 0
0 6 0 0 2 0
0 0 0 0 0 0
0 0 0 0 0 5
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int N, M;
char A[9][9];
int cccnt = 0;
char temp[257 * 257][9][9];
int cnt = 0;
int answer = 9999999;
int min(int a, int b) { return a < b ? a : b; }
vector<pair<int, int>> v;
int getMin() {
	/*
		
	   for (int i = 1; i <= N; i++) {
		  for (int j = 1; j <= M; j++) {
			 cout << A[i][j] << " ";
		  }
		  cout << endl;
	   }

	cout << endl;
	
	//cout << "hi";
	int temp = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (A[i][j] == '0') temp++;
		}
	}

	if (answer > temp) answer = temp;

	return 0;
}
void direction(int x, int y, int num) {
	if (num != 4)
		num = num % 4;
	if (num == 1) {
		
		if (y + 1 > M) return;
		//cout << "num1"<<endl;
		for (int i = y + 1; i <= M; i++) {
			//cout << "num1ing"<<endl;
			if (A[x][i] == '6') break;
			else if (A[x][i] == '0') A[x][i] = '#';
		}
	}
	else if (num == 2) {
		if (y - 1 < 1) return;
		for (int i = y - 1; i >= 1; i--) {
			if (A[x][i] == '6') break;
			else if (A[x][i] == '0') A[x][i] = '#';
		}
	}
	else if (num == 3) {

		if (x + 1 > N) return;

		for (int i = x + 1; i <= N; i++) {
			if (A[i][y] == '6') break;
			else if (A[i][y] == '0') A[i][y] = '#';
		}

	}
	else if (num == 4) {
		//cout << "num42" << endl;
		if (x - 1 < 1) return;
		//cout << "num4"<<endl;
		for (int i = x - 1; i >= 1; i--) {
			//cout << "num4ing"<<endl;
			if (A[i][y] == '6') break;
			else if (A[i][y] == '0') A[i][y] = '#';
		}
	}
}
void makenew(int mycase, int num, int depth) {

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			temp[cnt][i][j] = A[i][j];
		}
	} // 분기전 저장
	cnt++;
	//cout << "cnt 증가 : " << cnt << endl;
	int x = v[depth].first;
	int y = v[depth].second;
	//cout << "makenew"<<endl;
	if (mycase == 1) direction(x, y, num);
	else if (mycase == 2) {
		if (num == 1)  // -방향 
		{
			direction(x, y, 1);
			direction(x, y, 2);
		}
		else if (num == 2) // |방향
		{
			//cout << "hi1";
			direction(x, y, 3);
			direction(x, y, 4);
			//cout << "hi3";
		}
	}
	else if (mycase == 3) {
		if (num == 1) { // 12 ,3
			//cout << "myturn" << endl;
			direction(x, y, 4);
			direction(x, y, 1);
		}
		else if (num == 2) {//3,6
			direction(x, y, 1);
			direction(x, y, 3);
		}
		else if (num == 3) {//6,9
			direction(x, y, 3);
			direction(x, y, 2);
		}
		else if (num == 4) {//9,12
			direction(x, y, 2);
			direction(x, y, 4);
		}
	}
	else if (mycase == 4) {
		if (num == 1) { // 3 no
			direction(x, y, 2);
			direction(x, y, 3);
			direction(x, y, 4);
		}
		else if (num == 2) {//6 no
			direction(x, y, 1);
			direction(x, y, 2);
			direction(x, y, 4);
		}
		else if (num == 3) {//9 no
			direction(x, y, 1);
			direction(x, y, 3);
			direction(x, y, 4);
		}
		else if (num == 4) {//12 no
			direction(x, y, 1);
			direction(x, y, 2);
			direction(x, y, 3);
		}
	}
	else if (mycase == 5) {
		//cout << "hi";
		direction(x, y, num + 1);
		direction(x, y, num + 2);
		direction(x, y, num + 3);
		direction(x, y, num + 4);
	}
	//cout << "makenew end" << endl;
}

void makeorigin() {
	cnt--;
	//cout << "cnt 감소" <<cnt<< endl;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			A[i][j] = temp[cnt][i][j];
		}
	}

	return;
}
void bruteforce(int depth) {
	if (depth == cccnt) {
		getMin();
		return;
	}
	int x = v[depth].first;
	int y = v[depth].second;
	int mycase = A[x][y] - '0';
	int num = 0;
	if (mycase == 1) num = 4;
	if (mycase == 2)num = 2;
	if (mycase == 3)num = 4;
	if (mycase == 4)num = 4;
	if (mycase == 5) num = 1;
	//cout << "depth : " << depth << endl;
	for (int i = 1; i <= num; i++) {

		makenew(mycase, i, depth);
		//cout << "depth : " << depth << endl;
		//cout << "mycase : " << mycase << endl;
		//cout << "num : " << i << endl;
		bruteforce(depth + 1);
		makeorigin();
	}
	return;
}
int main() {

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {

			cin >> A[i][j];
			if (A[i][j] != '0'&&A[i][j] != '6') {
				cccnt++;
				v.push_back(make_pair(i, j));
			}
		}
	}
	//answer = N * M;
	//cout << v.size();;
	bruteforce(0);
	cout << answer;
	return 0;
}*/