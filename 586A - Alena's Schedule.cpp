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
	ll n, total = 0;
	cin >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (a[0] == 1) { total++; }
	for (ll i = 1; i < n - 1; i++) {
		if (a[i] == 1) { total++; }
		else {
			if (a[i + 1] == 1 && a[i-1] == 1) { total++; }
		}
	}
	if (a[n - 1] == 1 && n != 1) { total++; }
	cout << total;
}	
