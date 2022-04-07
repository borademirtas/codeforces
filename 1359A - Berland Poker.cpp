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
	ll n, m, k, k1, k2 = 0;
	cin >> n >> m >> k;
	ll kpp = n / k;
	k1 = min(m, kpp);
	m -= min(m, kpp);
	ll ns = k - 1;
	if (m <= ns) { k2 = 1; }
	else { k2 = m / ns; if (m % ns != 0) { k2++; } }
	if (m == 0) { k2 = 0; }
	cout << k1 - k2 << "\n"; return;

}



int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) { solve(); }
	
}
