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

void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	if ((a + b + c) % 9 == 0 && min({ a, b, c }) >= (a + b + c) / 9) { cout << "YES\n"; return; }
	else { cout << "NO\n"; return; }
}


int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
