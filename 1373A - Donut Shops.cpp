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
	ll a, b, c, ans1, ans2;
	cin >> a >> b >> c;
	if (a >= c) { ans1 = -1; }
	if (c > a) { ans1 = 1; }
	if (a * b <= c) { ans2 = -1; }
	if (a * b > c) { ans2 = b; }
	cout << ans1 << " " << ans2 << "\n"; return;
}



int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) { solve(); }
	
}
