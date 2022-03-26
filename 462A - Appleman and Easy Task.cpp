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
	ll n, o = 0;
	cin >> n;
	vector<string> a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if (i != 0 && a[i - 1][j] == 'o') { o++; }
			if (j != 0 && a[i][j-1] == 'o') { o++; }
			if (i != n - 1 && a[i + 1][j] == 'o') { o++; }
			if (j != n - 1 && a[i][j + 1] == 'o') { o++; }
			if (o % 2 != 0) { cout << "NO"; return 0; }
			o = 0;
		}
	}
	cout << "YES"; return 0;
}
