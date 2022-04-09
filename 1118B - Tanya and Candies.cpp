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
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}



int main() {
	FAST;
	ll n, o = 0, e = 0, total = 0;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; if (i % 2 == 1) { e += a[i]; } if (i % 2 == 0) { o += a[i]; }}
	ll oo = 0, oe = 0, ne = e, no = o;
	for (ll i = 0; i < n; i++) {
		if (i % 2 == 1) { ne -= a[i]; } if (i % 2 == 0) { no -= a[i]; }
		if (ne + oo == oe + no) { total++; }
		if (i % 2 == 1) { oe += a[i]; } if (i % 2 == 0) { oo += a[i]; }
	}
	cout << total;
}
	
