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
#include <list>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

bool solve(string s) {
	ll one_count = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '1') { one_count++; }
		if (s[i] != '1' && s[i] != '0') { return true; }
	}
	if (one_count > 1) { return true; }
	else { return false; }
}

int main() {
	FAST;
	ll n, zc = 0;
	cin >> n;
	string magic;
	bool magic_found = false;
	vector <string> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (magic_found == false) { bool ok = solve(a[i]); if (ok == true) { magic = a[i]; magic_found = true; } else { zc += a[i].size() - 1; } }
		else { zc += a[i].size() - 1; }
		if (a[i][0] == '0') { cout << 0; return 0; }
	}
	cout << magic;
	if (magic_found == false) { cout << 1; }
	for (ll i = 0; i < zc; i++) {
		cout << 0;
	}
}
