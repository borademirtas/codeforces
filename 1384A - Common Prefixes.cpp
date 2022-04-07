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
	ll n, top = 0;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; top = max(a[i], top); }
	if (top == 0) { top = 1; }
	vector<char> b(top, 'a');
	for (ll i = 0; i < top; i++) { cout << b[i]; }
	cout << "\n";
	for (ll i = 0; i < n; i++) {
		if(i != 0){ cout << "\n"; }
		for (ll j = 0; j < top; j++) {
			if (j < a[i]) { cout << b[j]; }
			else {
				if (b[j] == 'a') { b[j] = 'b'; }
				else { b[j] = 'a'; }
				cout << b[j];
			}
		}
	}
	cout << "\n"; return;

}



int main() {
	FAST;
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) { solve(); }

}
