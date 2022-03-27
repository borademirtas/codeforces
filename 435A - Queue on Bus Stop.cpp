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
	ll n, m, m1, total = 1;
	cin >> n >> m;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	m1 = m;
	for (ll i = 0; i < n; i++) {
		if (a[i] > m1) { total++; m1 = m - a[i]; }
		else { m1 -= a[i]; }
	}
	cout << total;
}
