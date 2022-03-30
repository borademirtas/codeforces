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
#include <numeric>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define pb push_back

void solve() {
	ll n, total = 0, nums = 0;
	char c;
	string s;
	cin >> n >> c >> s;
	vll index;
	for (ll i = 0; i < n; i++) {
		if (s[i] != c) { total++; }
	}
	if (total == 0) { cout << 0 << "\n"; return; }
	for (ll i = 1; i < n + 1; i++) {
		bool found = true;
		for (ll j = i; j <= n; j += i) {
			if (s[j - 1] != c) { found = false; break; }
		}
		if (found == true) { cout << 1 << "\n" << i << "\n"; return; }
	}
	cout << 2 << "\n" << n << " " << n - 1 << "\n"; return;
}


int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
