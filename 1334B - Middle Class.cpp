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
#define MOD % 998244353

void solve() {
	ll n, x, total = 0;
	cin >> n >> x;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; total += a[i]; }
	if (total / n >= x) { cout << n << "\n"; return; }
	sort(a.begin(), a.end());
	ll m = n;
	for (ll i = 0; i < n; i++) {
		total -= a[i];
		m--;
		if(m == 0){ cout << m << "\n"; return; }
		if(total / m >= x){ cout << m << "\n"; return; }
	}
}


int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
