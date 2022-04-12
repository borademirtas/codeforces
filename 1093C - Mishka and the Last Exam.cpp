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
#define pbb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;


int main() {
	FAST;
	ll n;
	cin >> n;
	n /= 2;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	vll b;
	vll c;
	b.pbb(0);
	c.pbb(a[0]);
	for (ll i = 1; i < n; i++) {
		ll num = min(c[i - 1], a[i]);
		ll num2 = a[i] - min(c[i - 1], a[i]);
		if (num2 < b[i-1]) { num2 = b[i - 1]; num = a[i] - num2; }
		c.pbb(num);
		b.pbb(num2);
	}
	reverse(c.begin(), c.end());
	for (ll i = 0; i < n; i++) { cout << b[i] << " "; }
	for (ll i = 0; i < n; i++) { cout << c[i] << " "; }
}
