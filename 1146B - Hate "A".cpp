#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
#include <map>
#include <set>
using namespace std;
#define ll long long 



int main() {
	string s;
	cin >> s;
	ll a = 0, z = 0;
	ll old_size = s.size();
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == 'a') { a++; }
	}
	vector<char> s2(s.size() - a);
	ll new_size = s2.size();
	if(new_size % 2 == 1) { cout << ":("; return 0; }
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] != 'a') { s2[z] = s[i]; z++; }
	}
	for (ll i = 0; i < s2.size() / 2; i++) {
		if (s2[i] != s2[i + s2.size() / 2]) { cout << ":("; return 0; }
	}
	for (ll i = 0; i < s2.size() / 2; i++) {
		if(s[s.size() - s2.size() / 2 + i] != s2[i]) { cout << ":("; return 0; }
	}
	for (ll i = 0; i < s.size() - s2.size() / 2; i++) {
		cout << s[i];
	}
}
