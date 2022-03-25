#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
using namespace std;
#define ll long long 



int main() {
	ll n, total = 0, count = 0;
	cin >> n;
	vector<ll> a(12);
	for (ll i = 0; i < 12; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	for (ll i = 0; i < 12; i++) {
		if (total >= n) { cout << count; return 0; }
		else { total += a[i]; count++; }
	}
	total < n ? cout << -1 : cout << count;
}	
