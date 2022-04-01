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

void solve() {
	ll n, k, comps = 1, total = 0;
	cin >> n >> k;
	while (comps < k) {
		total++;
		comps += comps;
		if(comps >= n){ cout << total << endl; return; }
	}
	if ((n - comps) % k == 0) { total += (n - comps) / k; }
	else { total += (n - comps) / k + 1; }
	cout << total << endl; return;
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
