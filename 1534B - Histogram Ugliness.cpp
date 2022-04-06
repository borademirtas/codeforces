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
	ll n, total = 0;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; }
	if (n == 2) { total += a[0] + a[1]; cout << total << "\n"; return;}
	if(n == 1){ cout << a[0] << "\n"; return; }
	total += a[0];
	for (ll i = 1; i < n; i++) {
		total += abs(a[i] - a[i - 1]);
	}
	total += a[n - 1];
	if (a[0] > a[1]) { total -= a[0] - a[1]; }
	for (ll i = 1; i < n - 1; i++) {
		if (a[i - 1] < a[i] && a[i + 1] < a[i]) { total -= a[i] - max(a[i - 1], a[i + 1]); a[i] = max(a[i - 1], a[i + 1]); }
	}
	if (a[n-1] > a[n-2]) { total -= a[n-1] - a[n-2]; }
	cout << total << "\n"; return;

}



int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
