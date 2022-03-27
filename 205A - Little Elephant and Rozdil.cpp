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
	ll n;
	cin >> n;
	vector<ll> a(n);
	vector<ll> b(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	b = a;
	sort(a.begin(), a.end());
	if (n == 1) { cout << 1; return 0; }
	else{
		if (a[0] == a[1]) { cout << "Still Rozdil"; return 0; }
		else {
			for (ll i = 0; i < n; i++) {
				if (b[i] == a[0]) { cout << i + 1; return 0; }
			}
		}
	}
}
