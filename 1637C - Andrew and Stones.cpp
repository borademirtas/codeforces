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

void solve() {
	ll n, total = 0, ans = 0;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; total += a[i]; }
	if (*max_element(a.begin() + 1, a.end() - 1) == 1 || (n == 3 && a[1] % 2 == 1)) {cout << "-1\n"; return;}
	for (ll i = 1; i < n - 1; i++) {
		ans += (a[i] + 1) / 2;
	}
	cout << ans << "\n"; return;
}


int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
