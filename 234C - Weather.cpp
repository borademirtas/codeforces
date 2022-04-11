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


int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	FAST;
	ll n, npc = 0, nnc = 0, opc = 0, onc = 0, score = 99999999999;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; if (a[i] < 0) { nnc++; } if (a[i] > 0) { npc++; }}
	for (ll i = 0; i < n - 1; i++) {
		if (a[i] < 0) { nnc--; onc++; } if (a[i] > 0) { npc--; opc++; }
		score = min((i + 1 - onc) + (n - i - 1 - npc), score);
	}
	cout << score;
}
