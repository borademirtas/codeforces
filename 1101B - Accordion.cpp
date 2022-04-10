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
	string s, s1;
	cin >> s;
	bool b1 = false, c1 = false, c2 = false, b2 = false;
	ll c1pos, c2pos, b1pos, b2pos, total = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '[' && b1 == false) { b1 = true; b1pos = i; }
		if (s[i] == ':' && b1 == true) { c1 = true; c1pos = i; }
		if (b1 == true && c1 == true) { break; }
	}
	if (b1 == false || c1 == false) { cout << -1; return 0; }
	for (ll i = s.size() - 1; i > c1pos; i--) {
		if (s[i] == ']' && b2 == false) { b2 = true; b2pos = i; }
		if (s[i] == ':' && b2 == true) { c2 = true; c2pos = i; }
		if (b2 == true && c2 == true) { break; }
	}
	if (b2 == false || c2 == false) { cout << -1; return 0; }
	for (ll i = c1pos; i < c2pos; i++) {
		if (s[i] == '|') { total++; }
	}
	cout << total + 4;

}
