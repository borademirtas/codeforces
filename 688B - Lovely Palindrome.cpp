#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
using namespace std;
#define ll long long 



int main() {
	string s;
	cin >> s;
	vector<char> a(s.size() * 2);
	for (ll i = 0; i < s.size(); i++) {
		a[i] = s[i];
		a[a.size() - 1 - i] = s[i];
	}
	for (ll i = 0; i < a.size(); i++) {
		cout << a[i];
	}	
}
