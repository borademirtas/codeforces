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
	ll k, a, b, v, total = 0;
	cin >> k >> a >> b >> v;
	while (true) {
		a -= v * min(k, b + 1);
		b -= min(k, b + 1) - 1;
		total++;
		if (a <= 0) { cout << total; return 0; }
	}
}
	
