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

void solve() {
	string s;
	cin >> s;
	if (s.size() % 2 == 1) { cout << "NO" << "\n"; return; }
	else {
		for (ll i = 0; i < s.size() / 2; i++) {
			if(s[i] != s[i+s.size() / 2]) { cout << "NO" << "\n"; return; }
		}
		 cout << "YES" << "\n"; return; 
	}
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
