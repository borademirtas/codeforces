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
	vector<ll> b(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
		if (b[i] - a[i] >= 2) { total++; }
	}
	cout << total;
}	
