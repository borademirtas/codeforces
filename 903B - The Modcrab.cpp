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
#define pbb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;



int main() {
	FAST;
	ll h1, h2, a1, a2, heal, ttk, ottk,heals = 0;
	cin >> h1 >> a1 >> heal >> h2 >> a2;
	if (h2 % a1 == 0) { ttk = h2 / a1; }
	else { ttk = h2 / a1 + 1; }
	if (h1 % a2 == 0) { ottk = h1 / a2; }
	else { ottk = h1 / a2 + 1; }
	ll netheal = heal - a2;
	if (ttk <= ottk) { heals = 0; }
	else {
		ll dif = ttk - ottk;
		ll nethealth = (ttk - 1) * a2 + 1;
		nethealth -= h1;
		if (nethealth % netheal == 0) { heals = nethealth / netheal; }
		else { heals = nethealth / netheal + 1; }
	}
	cout << heals + ttk << "\n";
	for (ll i = 0; i < heals; i++) { cout << "HEAL\n"; }
	for (ll i = 0; i < ttk; i++) { cout << "STRIKE\n"; }
}
