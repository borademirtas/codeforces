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
using namespace std;
#define ll long long 

int main() {
	ll n, m, top = 0, total = 0;
	cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	vector<ll> b(m);
	for (ll i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = 0; j < n; j++) {
			if (b[i] % a[j] == 0) { top = max(top, b[i] / a[j]); }
		}
	}
	for (ll i = 0; i < m; i++) {
		for (ll j = 0; j < n; j++) {
			if (b[i] % a[j] == 0 && b[i] / a[j] == top) { total++; }
		}
	}
	cout << total;
}
	
