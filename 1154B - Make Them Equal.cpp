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
	ll n;
	cin >> n;
	vll a(n);
	set <ll> b;
	for (ll i = 0; i < n; i++) { cin >> a[i]; b.insert(a[i]); }
	sort(a.begin(), a.end());
	ll dif = a[n - 1] - a[0];
	if (b.size() > 3) { cout << -1; return 0; }
	if (b.size() < 3 && dif % 2 == 1) { cout << a[n - 1] - a[0]; return 0; }
	if (dif % 2 == 1) { cout << -1; return 0; }
	dif /= 2;
	ll ans = a[0] + dif;
	if (b.size() < 3) { cout << a[n - 1] - ans; return 0; }
	for (ll i = 0; i < a.size(); i++) {
		if (a[i] != a[0] && a[i] != ans && a[i] != a[n - 1]) { cout << -1; return 0; }
	}
	cout << dif; return 0;
}
