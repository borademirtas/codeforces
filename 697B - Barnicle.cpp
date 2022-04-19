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
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

int main() {
	FAST;
	ll count = 0, total = 0;
	bool zero = false;
	bool allzero = false;
	bool ok = false;
	string s;
	string a;
	string d;
	string b;
	string f;
	cin >> s;
	ll i = 0;
	while (s[i] != '.') {
		a.push_back(s[i]);
		if (s[i] != '0') { allzero = true; }
		i++;
	}
	i++;
	while (s[i] != 'e') {
		b.push_back(s[i]);
		if (s[i] != '0') { allzero = true; }
		i++;
	}
	i++;
	while (s[i] != 'e' && i < s.size()) {
		d.push_back(s[i]);
		i++;
	}
	ll mult = stoi(d);
	mult++;
	i = 0;
	if (allzero == false) { cout << 0; return 0; }
	while (mult != 0 && i < a.size()) {
		if (a[i] == '0' && zero == false) { i++; mult--; continue; }
		if (a[i] != '0') { zero = true; }
		cout << a[i];
		total++;
		i++;
		mult--;
	}
	i = 0;
	while (mult != 0 && i < b.size()) {
		if (b[i] == '0' && zero == false) { i++; mult--; continue; }
		if (b[i] != '0') { zero = true; }
		cout << b[i];
		total++;
		i++;
		mult--;
	}
	ll j = i;
	while (mult != 0) { cout << 0; mult--; }
	if (total == 0) { cout << 0; }
	while (j < b.size()) { f.push_back(b[j]); j++; }
	for (ll t = 0; t < f.size(); t++) { if (f[t] != '0') { ok = true; } }
	if (i < b.size() && ok == true) {
		cout << '.';
		for (ll t = 0; t < f.size(); t++) { cout << f[t]; }
	}
}
	
	
