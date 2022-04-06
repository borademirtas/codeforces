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





int main() {
	FAST;
	ll n, t, c, streak = 0, total = 0;
	cin >> n >> t >> c;
	vll a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= t) { streak++; }
		else {
			if (streak >= c) {
				total += streak - c + 1;
			}
			streak = 0;
		}
	}
	if (streak >= c) { total += streak - c + 1; }
	cout << total; return 0;
}
