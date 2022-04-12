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
	string s;
	cin >> s;
	ll wc = 0, nw = 0, total = 0;
	for (ll i = 0; i < s.size() - 1; i++) {
		if (s[i] == 'v' && s[i + 1] == 'v') { wc++; }
	}
	for (ll i = 0; i < s.size() - 1; i++) {
		if (s[i] == 'v' && s[i + 1] == 'v') { nw++; wc--; }
		if (s[i] == 'o') { total += nw * wc; }
	}
	cout << total;

}
