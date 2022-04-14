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
#include <queue>
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
#define cout std::cout


int main() {
	FAST;
	ll n, m, dif, total, ans = -1;
	cin >> n >> m;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
	vll b(m); for (ll i = 0; i < m; i++) { cin >> b[i]; }
	for (ll i = 1; i < n; i++) {
		dif = a[i] - a[i - 1];
		if (i == 1) { total = dif; }
		else { total = gcd(total, dif); }
	}
	for (ll i = 0; i < m; i++) {
		if (total % b[i] == 0) { ans = i + 1; break; }
	}
	if (ans == -1) { cout << "NO"; return 0; }
	cout << "YES\n";
	cout << a[0] << " " << ans;
}
	
	
