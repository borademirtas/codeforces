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
	ll n, m, sum = 0, total = 0;
	cin >> n >> m;
	vll a(n);
	vll b(n);
	vll dif(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		cin >> b[i];
		dif[i] = a[i] - b[i];
	}
	sort(dif.begin(), dif.end());
	reverse(dif.begin(), dif.end());
	for (ll i = 0; i < n; i++) {
		if (sum > m) { sum -= dif[i]; total++; }
		else { cout << total; return 0; }
	}
	if (sum > m) { cout << -1; return 0; }
	else { cout << total; return 0; }
}
