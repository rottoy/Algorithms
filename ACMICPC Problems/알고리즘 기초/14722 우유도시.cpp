/*#include<iostream>

using namespace std;

int dp[1001][1001];
int a[1001][1001];

int max(int a, int b) { return a > b ? a : b; }
int main() {




	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];		
		}
	}
	//memset(dp, -5, sizeof(dp));
	if (a[1][1] == 0)
		dp[1][1] = 1;
	
	for (int i = 2; i <= n; i++) {
		if ((a[i - 1][1] + 1) % 3 == a[i][1]) {
			if (dp[i][1] != -1)
			{
			//	cout << "h";
			dp[i][1] = dp[i - 1][1] + 1;
			}
		}
		else{
			//cout << "h2";
			dp[i][1] = -1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			bool check1 = false;
			bool check2 = false;
			bool check3 = false;
			int x1 = -1;
			int x2 = -1;
			int x3 = -1;
			if ((a[i - 1][j - 1] + 1) % 3 == a[i][j]) // 정방향 진행1 이라면
			{
				if(a[i-1][j-1]!=-1)
				check1 = true;
			}
			if ((a[i - 1][j] + 1) % 3 == a[i][j]) // 정방향 진행2 이라면
			{
				if (a[i - 1][j] != -1)
				check2 = true;
			}
			if ((a[i][j - 1] + 1) % 3 == a[i][j]) // 정방향 진행3 이라면
			{
				if (a[i][j - 1] != -1)
				check3 = true;
			}

			if (check1)
				x1 = dp[i - 1][j - 1];
			if (check2)
				x2 = dp[i-1][j];
			if (check3)
				x3 = dp[i][j - 1];
			
			if (x1 == -1 && x2 == -1 && x3 == -1) {
				
				dp[i][j] = -1;
				//cout << "i executed at" << i << "," << j << endl;
			}
			else
				dp[i][j] = max(x3, max(x1, x2)) + 1;
		}

		
	}
	
	int result = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << dp[i][j] << " ";
			result = max(result, dp[i][j]);
		}
		cout << endl;
	}


	cout << result;
	return 0;

}*/