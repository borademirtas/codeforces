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
	ll m, s;
	cin >> m >> s;
	ll olds = s;
	if (s == 0 && m > 1) { cout << -1 << " " << -1; return 0; }
	if (s == 0 && m == 1) { cout << 0 << " " << 0; return 0; }
	if (m * 9 < s) { cout << -1 << " " << -1;  return 0; }
	vector<char> c;
	
	vector<char> d;
	s -= 1;
	for (ll i = 0; i < m - 1; i++) {
		if (s >= 9) { d.push_back('9'); s -= 9; }
		else { d.push_back(s + 48); s -= s; }
	}
	s++;
	d.push_back(s + 48);
	reverse(d.begin(), d.end());
	for (ll i = 0; i < d.size(); i++) {
		cout << d[i];
	}
	cout << " ";
	s = olds;
	for (ll i = 0; i < m; i++) {
		if (s >= 9) { c.push_back('9'); s -= 9; }
		else { c.push_back(s + 48); s -= s; }
	};
	for (ll i = 0; i < c.size(); i++) {
		cout << c[i];
	}
}
