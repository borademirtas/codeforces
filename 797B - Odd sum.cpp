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
	ll n, total = 0, posmax = 0, negmax = 0, ans = 0;
	vll pos;
	vll neg;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; if (a[i] > 0) { pos.push_back(a[i]); total += a[i]; } if (a[i] < 0) { ll num = abs(a[i]); neg.PB(num); } }
	if (total % 2 == 1) { cout << total; return 0; }
	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());
	for (ll i = 0; i < pos.size(); i++) {
		if (pos[i] % 2 == 1) { posmax = pos[i]; break; }
	}
	for (ll i = 0; i < neg.size(); i++) {
		if (neg[i] % 2 == 1) {negmax = neg[i]; break; }
	}
	if (posmax == 0) { ans = negmax; }
	if (negmax == 0) { ans = posmax; }
	if (posmax != 0 && negmax != 0) { ans = min(negmax, posmax); }
	cout << total - ans;
}
