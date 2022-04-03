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
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
	ll top = 100000, n, m;
	cin >> n >> m;
	ll x = n, y = m;
	if(m > n){ cout << 1 << '\n' << endl; return; }
	for (ll i = 30; i > -1; i--) {
		x = n;
		ll total = 0;
		while (x != 0) { total++; x /= m + i; if (m + i == 1) { cout << top << '\n' << endl; return; } }
		top = min(i + total, top);
	}
	cout << top << '\n' << endl; return;
}


int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
	
}
