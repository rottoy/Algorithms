/*#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {

	string s; int b;
	cin >> s >> b;
	int sum = 0, idx = 0;
	for (int i = s.length() - 1; i >= 0; i--){
		int a;
		if (s[i] - 'A' < 0)  a = int(s[i]-'0');
		else  a =int(s[i] - 'A'+10);
		sum += a*int(pow(b, idx++));
	}
	cout << sum;
	return 0;
}*/