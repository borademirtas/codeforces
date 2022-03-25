#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
#define ll long long 



int main() {
	ll n, m, total = 0;
	cin >> n >> m;
	for (ll i = 1; i < n + 1; i++) {
		total += (i + m) / 5 - (i / 5);
	}
	cout << total;
	
}
