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

void solve() {
	string s1, s2, s3;
	ll total = 0;
	cin >> s1 >> s2 >> s3;
	map<char, ll> b;
	map<char, ll> c;
	map<char, ll> d;
	for (ll i = 0; i < s1.size(); i++) { b[s1[i]]++;}
	for (ll i = 0; i < s3.size(); i++) { b[s3[i]]++; }
	for (ll i = 0; i < s2.size(); i++) { c[s2[i]]++; }
	for (ll i = 0; i < s2.size(); i++) { if (b[s2[i]] < c[s2[i]]) { cout << "NO\n"; return; } }
	for (ll i = 0; i < s2.size(); i++) {
		if (s2[i] == s1[total]) { total++; }
	}
	if (total == s1.size()) { cout << "YES\n"; return; }
	else { cout << "NO\n"; return; }
}

int main() {
	FAST;
	tc;
}
	
