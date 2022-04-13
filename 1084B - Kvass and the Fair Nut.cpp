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
	ll n, s, low, total = 0, ans = 0;
	cin >> n >> s;
	vll a(n); 
	for (ll i = 0; i < n; i++) { cin >> a[i]; if (i == 0) { low = a[i]; } low = min(low, a[i]); total += a[i]; }
	if (total < s) { cout << -1; return 0; }
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for (ll i = 0; i < n; i++) {
		ans += a[i] - low;
		a[i] -= low;
	}
	if (ans >= s) { cout << low; return 0; }
	s -= ans;
	if (s % n == 0) { cout << low - (s / n); }
	else { cout << low - (s / n + 1); }
}
	
