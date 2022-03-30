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
	ll n;
	cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < n - 2; i++) {
		for (ll j = n - 1; j > i; j--) {
			if (a[i] == a[j] && j - i > 1) { cout << "YES" << "\n"; return; }
		}
	}
	cout << "NO" << "\n"; return;
}


int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
