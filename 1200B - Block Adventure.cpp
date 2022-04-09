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

void solve() {
	ll n, m, k;
	cin >> n >> m >> k;
	ll blocks = m;
	vfast;
	for (ll i = 1; i < n; i++) {
		ll target = a[i] - k;
		if (target < 0) { target = 0; }
		if (a[i - 1] >= target) { blocks += a[i - 1] - target; }
		if (a[i - 1] < target) {blocks -= target - a[i - 1];}
		if (blocks < 0) { cout << "NO\n"; return; }
	}
	cout << "YES\n"; return;


}

int main() {
	FAST;
	tc
}
