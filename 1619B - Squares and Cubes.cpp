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
	set<ll> a;
	for (ll i = 1; i * i <= n; i++) {
		a.insert(i * i);
	}
	for (ll i = 1; i * i * i <= n; i++) {
		a.insert(i * i * i);
	}
	cout << a.size() << "\n"; return;
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
