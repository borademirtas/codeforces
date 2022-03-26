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
	ll n, money = 0, energy = 0;
	cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	money += a[0];
	for (ll i = 1; i < n; i++) {
		energy += a[i - 1] - a[i];
		if (energy < 0) { money += abs(energy); energy = 0; }
	}
	cout << money;
}
