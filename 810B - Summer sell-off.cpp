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
	ll n, m, total = 0;
	cin >> n >> m;
	vector<ll> a1(n);
	vector<ll> a2(n);
	vector<ll> dif(n);
	for (ll i = 0; i < n; i++) {
		cin >> a1[i];
		cin >> a2[i];
		dif[i] = min(a1[i] * 2, a2[i]) - min(a1[i], a2[i]);
		total += min(a1[i], a2[i]);
	}
	sort(dif.begin(), dif.end());
	reverse(dif.begin(), dif.end());
	for (ll i = 0; i < m; i++) {
		total += dif[i];
	}
	cout << total;
}
