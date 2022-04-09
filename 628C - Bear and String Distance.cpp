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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;


int main() {
	FAST;
	ll n, k, top = 0, dif = 0;
	string s;
	cin >> n >> k >> s;
	for (ll i = 0; i < n; i++) {
		top += max('z' - s[i], s[i] - 'a');
	}
	if (top < k) { cout << -1; return 0; }
	for (ll i = 0; i < n; i++) {
		ll num = max('z' - s[i], s[i] - 'a');
		if (num <= k) {
			if ('z' - s[i] > s[i] - 'a') { cout << 'z'; }
			else { cout << 'a'; }
			k -= max('z' - s[i], s[i] - 'a');
			continue;
		}
		if (k == 0) { cout << s[i]; continue; }
		if (num > k) { if (s[i] + k <= 'z') { cout << char(s[i] + k); k = 0; continue; } if (s[i] - k >= 'a') { cout << char(s[i] - k); k = 0; continue; } }
	}
}
