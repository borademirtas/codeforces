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
	ll n, total = 0;
	cin >> n;
	vll a(18, 1);
	for (ll i = 0; i < 18; i++) { if (n - total >= 2) { a[i] = 8; total += 2; } else if (n - total == 1) { a[i] = 6; total += 1; } if (n - total == 0) { continue; } }
	if (n - total != 0) { cout << -1; return 0; }
	for (ll i = 0; i < 18; i++) {
		cout << a[i];
	}
}
