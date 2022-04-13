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

void solve() {
	ll n;
	cin >> n;
	vll a(n);
	vll b(n);
	vector<bool> locked(n, 0);
	vll c;
	vll d;
	for (ll i = 0; i < n; i++) { cin >> a[i]; }
	for (ll i = 0; i < n; i++) { cin >> b[i]; }
	for (ll i = 0; i < n; i++) { if (b[i] == 0) { if (a[i] > -1) { c.pbb(a[i]); } if (a[i] < 0) { d.pbb(a[i]); } } else { locked[i] = true; } }
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());
	sort(d.begin(), d.end());
	reverse(d.begin(), d.end());
	for (ll i = 0; i < d.size(); i++) { c.pbb(d[i]); }
	ll num = 0;
	for (ll i = 0; i < n; i++) {
		if (locked[i] == true) { cout << a[i] << " "; }
		else { cout << c[num] << " "; num++; }
	}
	
}
int main() {
	FAST;
	tc;
}
	
	
