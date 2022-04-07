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
	ll n, m, num, tot;
	cin >> n >> m;
	if (m > n) { cout << "NO\n"; return; }
	if ((n - (m - 1)) % 2 == 1) { num = 1; }
	else { num = 2; }
	tot = n - (m - 1) * num;
	if (tot <= 0 || num % 2 != tot % 2) { cout << "NO\n"; return; }
	else { cout << "YES\n"; }
	cout << tot << " ";
	for (ll i = 0; i < m - 1; i++) {
		cout << num << " ";
	}
	cout << "\n"; return;
}



int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) { solve(); }

}
