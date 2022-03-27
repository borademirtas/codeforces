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
	ll n, m, m2, size = 0;
	cin >> n >> m;
	vector<ll> a(n);
	vector<pair<ll, ll>> arr(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		arr[i].first = a[i];
		arr[i].second = i+1;
	}
	sort(arr.begin(), arr.end());
	m2 = m;
	for (ll i = 0; i < n; i++) {
		if (arr[i].first <= m) { size++; }
		m -= arr[i].first;
	}
	cout << size << endl;
	for (ll i = 0; i < n; i++) {
		if (arr[i].first <= m2) { cout << arr[i].second << " "; }
		else { return 0; }
		m2 -= arr[i].first;
	}
}
