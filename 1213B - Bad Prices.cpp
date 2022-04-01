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
	ll n, total = 0;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) {cin >> a[i];}
	reverse(a.begin(), a.end());
	ll lowest = a[0];
	for (ll i = 0; i < n; i++) { if (a[i] > lowest) total++; lowest = min(lowest, a[i]); }
	cout << total << "\n"; return;
}

int main() {
	FAST
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
