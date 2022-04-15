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

int main() {
	FAST;
	ll n, top = 0, year = 0, time, total = 0, deaths = 0;
	cin >> n;
	vll a(n);
	vll b(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (ll i = 0; i < n; i++) {
		time = a[i];
		total++;
		while (true) {
			if (b[deaths] <= time) { deaths++; total--; }
			else { break; }
		}
		if (top < total) { year = a[i]; }
		top = max(total, top);
	}
	cout << year << " " << top;
}
