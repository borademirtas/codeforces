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
	ll n, x, total = 0;
	cin >> n >> x;
	for (ll i = 1; i <= n; i++) {
		if (x % i == 0 && x / i <= n) { total++; }
	}
	cout << total;
}
