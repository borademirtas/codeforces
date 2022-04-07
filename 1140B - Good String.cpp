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
	ll n, ans = 1000000;
	string s;
	cin >> n >> s;
	for (ll i = 0; i < n; i++) {
		if (s[i] == '>' || s[n - 1 - i] == '<') {
			ans = min(ans, i);
		}
	}
	cout << ans << "\n"; return;
}

int main() {
	ll t; cin >> t; for (ll i = 0; i < t; i++) { solve(); }
}
