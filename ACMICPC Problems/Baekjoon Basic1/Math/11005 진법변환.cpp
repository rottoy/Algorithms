/*#include<iostream>
#include<string>
using namespace std;
int main() {
	int n,b;
	cin >> n>>b;
	string s;
	while (n) {
		int r = n % b;
		n /= b;
		if (r <= 9)
			s.insert(0, to_string(r));
		else
			s.insert(0, 1,char(r - 10 + 'A'));
	}
	cout << s;
	
}*/