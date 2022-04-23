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
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

void solve() {
	string s;
	ll p = 0;
	ll r = 0;
	ll S = 0;
	cin >> s;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == 'R') { p++; }
		if (s[i] == 'S') { r++;  }
		if (s[i] == 'P') { S++; }
	}
	if (S >= r && S >= p) { for (ll i = 0; i < s.size(); i++) { cout << 'S'; } cout << "\n"; return;}
	if (r >= S && r >= p) { for (ll i = 0; i < s.size(); i++) { cout << 'R'; } cout << "\n"; return; }
	if (p >= S && p >= r) { for (ll i = 0; i < s.size(); i++) { cout << 'P'; } cout << "\n"; return; }
}

int main() {
	FAST;
	tc;
}
	
	
