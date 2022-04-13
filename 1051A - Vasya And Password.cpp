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
	string s;
	cin >> s;
	ll upper = 0, lower = 0, num = 0;
	vll u;
	vll l;
	vll n;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') { upper++; u.pbb(i); }
		if (s[i] >= 'a' && s[i] <= 'z') { lower++; l.pbb(i);}
		if (s[i] >= '0' && s[i] <= '9') { num++; n.pbb(i);}
	}
	if (num > 0 && upper > 0 && lower > 0) { cout << s << "\n"; return; }
	if (upper == 0 && lower == 0) { s[n[1]] = 'A'; s[n[2]] = 'a'; cout << s << "\n"; return;}
	if (num == 0 && lower == 0) { s[u[1]] = '1'; s[u[2]] = 'a'; cout << s << "\n"; return;}
	if (upper == 0 && num == 0) { s[l[1]] = '1'; s[l[2]] = 'A'; cout << s << "\n"; return;}
	if (upper == 0 && lower > 0 && num > 0) {
		if (lower > 1) { s[l[1]] = 'A'; cout << s << "\n"; return;}
		if (num > 1) { s[n[1]] = 'A'; cout << s << "\n"; return;}
	}
	if (lower == 0 && upper > 0 && num > 0) {
		if (upper > 1) { s[u[1]] = 'a'; cout << s << "\n"; return;}
		if (num > 1) { s[n[1]] = 'a'; cout << s << "\n"; return;}
	}
	if (num == 0 && lower > 0 && upper > 0) {
		if (lower > 1) { s[l[1]] = '1'; cout << s << "\n"; return;}
		if (upper > 1) { s[u[1]] = '1'; cout << s << "\n"; return;}
	}
	cout << s << "\n"; return;
}

int main() {
	FAST;
	tc;
}
