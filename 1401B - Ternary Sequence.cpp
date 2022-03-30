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

void solve() {
	ll x1, y1, z1, x2, y2, z2, sum = 0, temp;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
	temp = min(x1, z2);
	z2 -= temp;
	x1 -= temp;
	if (z2 > 0) { temp = min(z1, z2); z1 -= temp; z2 -= temp; }
	if (z2 > 0) { temp = min(z2, y1); z2 -= temp; y1 -= temp; sum += temp * -2; }
	if (z1 > 0) { temp = min(z1, y2); z1 -= temp; y2 -= temp; sum += temp * 2; }
	cout << sum << "\n";

}
	



int main() {
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}
