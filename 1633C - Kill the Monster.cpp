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
	ll hc, dc, hm, dm, k, w, a, ttkc, ttkm;
	cin >> hc >> dc >> hm >> dm >> k >> w >> a;
	ll newd, newh;
	for (ll i = 0; i <= k; i++) {
		newd = dc + w * (k - i);
		newh = hc + a * i;
		if (hm % newd == 0) { ttkc = hm / newd; }
		else { ttkc = hm / newd + 1; }
		if (newh % dm == 0) { ttkm = newh / dm; }
		else { ttkm = newh / dm  + 1; }
		if (ttkc <= ttkm) { cout << "YES" << endl; return; }
	}
	cout << "NO" << endl; return;
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
