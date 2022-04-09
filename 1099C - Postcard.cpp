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


int main() {
	FAST;
	ll n, total, lc = 0, sc = 0;
	string s;
	cin >> s >> n;
	total = s.size();
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '?' || s[i] == '*') { total -= 2; }
		if (s[i] != '?' && s[i] != '*') { lc++; }
		if (s[i] == '*') { sc++; }
	}
	string s1;
	if (total > n) { cout << "Impossible"; return 0; }
	if (lc < n && sc == 0) { cout << "Impossible"; return 0; }
	if (lc > n) {
		for (ll i = 0; i < s.size() - 1; i++) {
			if (s[i] != '?' && s[i] != '*') {
				if (s[i + 1] == '?' || s[i + 1] == '*') { if (lc > n) { lc--; continue; } else { s1.push_back(s[i]); continue; } }
				else { s1.push_back(s[i]); }
			}
		}
		if (s[s.size() -  1] != '?' && s[s.size() - 1] != '*') { s1.push_back(s[s.size() - 1]); }
		cout << s1; return 0;
	}
	ll dif = n - lc;
	if (lc < n) {
		for (ll i = 0; i < s.size() - 1; i++) {
			if (s[i] != '?' && s[i] != '*') {
				if (s[i + 1] == '*' && dif > 0) { while (dif != -1) { s1.push_back(s[i]); dif--; } }
				else { s1.push_back(s[i]); }
			}
		}
		if (s[s.size() - 1] != '?' && s[s.size() - 1] != '*') { s1.push_back(s[s.size() - 1]); }
		cout << s1; return 0;
	}
	if (lc == n) {
		for (ll i = 0; i < s.size(); i++) {
			if (s[i] != '?' && s[i] != '*') { cout << s[i]; }
		}
		return 0;
	}
}
