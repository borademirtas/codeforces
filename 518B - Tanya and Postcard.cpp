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


int main() {
	FAST;
	ll y = 0, w = 0;
	string s1, s2;
	cin >> s1 >> s2;
	vector<char> c;
	map<char, ll> b;
	for (ll i = 0; i < s2.size(); i++) {
		b[s2[i]]++;
	}
	for (ll i = 0; i < s1.size(); i++) {
		if (b[s1[i]] > 0) { y++; b[s1[i]]--; }
		else {
			c.push_back(s1[i]);
		}
	}
	for (ll i = 0; i < c.size(); i++) {
		if (b[c[i] + 32] > 0) { w++; b[c[i] + 32]--; }
		else {
			if (b[c[i] - 32] > 0) { w++; b[c[i] - 32]--; }
		}
	}
	cout << y << " " << w;
}
	
	
