/*
#include<iostream>
#include<string>
#include<math.h>
#include<memory.h>
using namespace std;

string s;
int dp[18][1 << 18];
int min(int a, int b) { return a < b ? a : b; }
int calc(char a, char b) {
   int c = abs(a - b);
   return min(c, 26 - c);
}
int cnt = 0;
int dfs(int idx, int bit) {
   if (dp[idx][bit])return dp[idx][bit];
   dp[idx][bit] = 99999999;
   int p = 1; //위치체크용
   for (int i = 0; i < idx; i++)if (bit&(1 << i))p++;
   int temp = 0;
   for (int i = 0; i < s.length(); i++) {
	   int c = 0;
		 int dist_alpha = calc(s[i], s[idx]);
		 dp[idx][bit] = min(dp[idx][bit], dfs(i, bit&~(1 << idx)) + c + dist_alpha + 1);
	  
   }
   return dp[idx][bit];
}
int main() {


   while (cin >> s && s != "0") {
	  memset(dp, 0, sizeof(dp));
	  int full = (1 << s.length()) - 1;
	  int ans = 9999999;
	  for (int i = 0; i < s.length(); i++) {
		 dp[i][(1 << i)] = calc('A', s[i]) + 1; //fire 포함해서 더해줌.
	  }
	  for (int i = 0; i < s.length(); i++) {
		 // cnt = 0;
		 int temp = dfs(i, full);
		// cout << cnt<<"\n";
		 if (ans > temp)ans = temp;
	  }
	  cout << ans << "\n";
   }

}
*/

