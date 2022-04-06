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
	ll a, b, total = 0;
	cin >> a >> b;
	if (b > a) { swap(a, b); }
	if (a % b != 0) { cout << -1 << "\n"; return; }
	ll n = a / b;
	while (n != 1) {
		if (n % 8 == 0) { n /= 8; total++; }
		else if (n % 4 == 0) { n /= 4; total++; }
		else if (n % 2 == 0) { n /= 2; total++; }
		else { cout << -1 << "\n"; return;}
	}
	cout << total << "\n"; return;
}



int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) { solve(); }
	
}
