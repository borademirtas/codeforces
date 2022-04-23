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
#define mpll c;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

bool check(string s) {
	ll r = 0, l = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '(') { l++; }
		else { r++;  if (r != 0 && l != 0) { r--; l--; } }
	}
	if (r == 0 || l == 0) { return true; }
	else { return false; }
}

int main() {
	FAST;
	ll n, total = 0;
	cin >> n;
	map<ll, ll> b;
	vll bal(n, 0);
	for (ll i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (ll j = 0; j < s.size(); j++) {
			if (s[j] == '(') { bal[i]++; }
			else { bal[i]--; }
			
		}
		if(check(s) == true){ 
			b[bal[i]]++;
			if (b[0 - bal[i]] > 0 && bal[i] != 0) { total++; b[bal[i]]--; b[0 - bal[i]]--; }
			if (bal[i] == 0 && b[bal[i]] > 1) { total++; b[bal[i]]--; b[0 - bal[i]]--; }
		}

	}
	cout << total;
}
	
