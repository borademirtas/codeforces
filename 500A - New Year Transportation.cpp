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

vector <ll> v[101];
int main() {
	ll n, t, current = 1;
	cin >> n >> t;
	vector<ll> a(n + 1);
	for (ll i = 1; i < n; i++) {
		cin >> a[i];
	}
	while (current < t) {
		current += a[current];
		if (current == t) { cout << "YES"; return 0; }
	}
	cout << "NO";
}
