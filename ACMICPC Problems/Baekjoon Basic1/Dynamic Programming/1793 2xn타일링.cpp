/*#include<iostream>
#include<string>
using namespace std;

string dp[251];
string splus(string sa, string sb) {
	string temp = "";
	int len = sa.length() > sb.length() ? sa.length() : sb.length();
	int alen = sa.length();
	int blen = sb.length();
	int c = 0;
	int r = 0;
	for (int i = 1; i <=len ;i++) {
		int sum = c;
		if(alen-i>=0)
		sum+=int(sa[alen - i] - 48);
		if(blen-i>=0)
		sum+=int(sb[blen - i] - 48);
		c = sum / 10;
		r = sum % 10;
		sum /= 10;
		temp.insert(0, to_string(r));
	}
	if(c!=0)
	temp.insert(0, to_string(c));
	return temp;
}
int main() {
	int n;
	dp[0] = "1";
	dp[1] = "1";
	dp[2] = "3";
	//cout << splus("12", "99");
	for (int i = 3; i <= 250; i++) {
		string temp = splus(dp[i - 2], dp[i - 2]);
		dp[i] = splus(dp[i - 1], temp);
		//dp[i] = dp[i - 1] + 2 * dp[i - 2];

	}
	while (cin >> n) {
	
		cout << dp[n]<<"\n";

	}
	return 0;
}*/