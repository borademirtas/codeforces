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
#include <numeric>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353



int main() {
	FAST;
	ll n, total = 0;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i];}
	sort(a.begin(), a.end());
	for (ll i = 1; i < n; i++) {
		if (a[i] == a[i - 1]) { total++; a[i] += 1; }
		if (a[i] < a[i - 1]) { total += (a[i - 1] - a[i]) + 1; a[i] = a[i-1] + 1; }
	}
	cout << total;

}
