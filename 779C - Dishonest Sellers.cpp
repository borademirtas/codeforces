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
	ll n, m, ans = 0;
	cin >> n >> m;
	vll a(n); 
	vll b(n);
	vll dif(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; }
	for (ll i = 0; i < n; i++) { cin >> b[i]; ans += b[i]; }
	for (ll i = 0; i < n; i++) { dif[i] = a[i] - b[i]; }
	sort(dif.begin(), dif.end());
	for (ll i = 0; i < n; i++) {
		if (i < m || dif[i] < 0) { ans += dif[i]; }
	}
	cout << ans;
	
}
