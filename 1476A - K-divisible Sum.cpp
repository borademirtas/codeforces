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

void solve() {
	ll n, m;
	cin >> n >> m;
	if (n > m && n % m != 0) { m = (n / m) * m + m; }
	if (n > m && n % m == 0) { m = (n / m) * m; }
	if (m % n == 0) { cout << m / n << endl; return; }
	else { cout << m / n + 1 << endl; return; }
}


int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
	
}
