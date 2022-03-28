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
	ll n, m, ans = 4;
	cin >> n >> m;
	vector<vector<ll>> a(n, vector<ll>(m));
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 1) {
				if (i == n - 1 || j == m - 1 || i == 0 || j == 0) { ans = 2; }
			}
		}
	}
	cout << ans;
}
