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
using namespace std;
#define ll long long 

void solve() {
	ll m, last_even = 0 , last_odd = 0;
	cin >> m;
	vector<ll> a(m);
	for (ll j = 0; j < m; j++) {
		cin >> a[j];
	}
	for (ll j = 0; j < m; j++) {
		if (a[j] % 2 == 0) {
			if (a[j] < last_even) { cout << "NO" << "\n"; return; }
			else { last_even = a[j]; }
		}
		else {
			if (a[j] < last_odd) { cout << "NO" << "\n"; return; }
			else { last_odd = a[j]; }
		}
	}
	
	cout << "YES" << "\n"; return;
}

int main() {
	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		solve();
	}
}
