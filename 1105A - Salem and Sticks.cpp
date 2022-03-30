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
using namespace std;
#define ll long long 



int main() {
	ll n, t, low = 100000000, total;
	cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 1; i < 101; i++) {
		total = 0;
		for (ll j = 0; j < n; j++) {
			total += min(min(abs(a[j] - i), abs(a[j] - i - 1)), abs(a[j] - i + 1));
		}
		if (total < low) { low = total; t = i; }
	}
	cout << t << " " << low;
}
