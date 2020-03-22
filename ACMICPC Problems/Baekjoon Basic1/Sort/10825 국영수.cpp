/*
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Person {
	int kuk;
	int young;
	int su;
	string name;
	
};
vector<Person> v;
bool cmp(Person a, Person b) {
	if (a.kuk > b.kuk) return true;
	else if (a.kuk == b.kuk) {
		if (a.young == b.young){
			if(a.su==b.su)return a.name < b.name;
			return a.su > b.su;
		}
		return a.young < b.young;
	} 
	else return false;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a,b,c; string d;
		cin >> d>> a>> b>> c;
		v.push_back({ a,b,c,d });
	}

	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << v[i].name << "\n";
		//cout <<  (v[i].name < v[i+1].name) << "\n";
	}
}
*/