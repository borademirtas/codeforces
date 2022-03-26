#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
using namespace std;
#define ll long long 



int main() {
	ll n, x, y, total = 0, ans = 0, g1 = 0, g2 = 0;
	cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	cin >> x >> y;
	g2 = total;
	for (ll i = 0; i < n; i++) {
		ans++;
		g1 += a[i];
		g2 -= a[i];
		if (g1 >= x && g2 >= x && g2 <= y && g1 <= y) { cout << ans + 1; return 0; }
	}
	cout << 0;
}
	
