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
#define vp vector<pair<ll,ll>>



int main() {
	ll n, total = 0;
	cin >> n;
	vp a(n * 2);
	for (ll i = 0; i < a.size(); i++) { cin >> a[i].first; a[i].second = i; }
	sort(a.begin(), a.end());
	total += a[0].second;
	total += a[1].second;
	for (ll i = 2; i < a.size(); i++) {
		total += abs(a[i].second - a[i - 2].second);
	}
	cout << total;
}
