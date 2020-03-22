/*#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Person{
	int age;
	string name;
	int join;
};
vector<Person> v;
bool cmp(Person a, Person b) {
	if (a.age < b.age) return true;
	else if (a.age == b.age) return a.join < b.join;
	else return false;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a; string b;
		cin >> a >> b;
		v.push_back({ a,b,i });
	}
	sort(v.begin(), v.end(),cmp);
	for (int i = 0; i < n; i++) {
		cout << v[i].age << " " << v[i].name << "\n";
	}
}
*/