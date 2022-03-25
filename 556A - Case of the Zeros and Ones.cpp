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
	ll n, zero_count = 0, one_count = 0;
	string s;
	cin >> n >> s;
	for (ll i = 0; i < n; i++) {
		if (s[i] == '0') { zero_count++; }
		else { one_count++; }
	}
	cout << n - min(zero_count, one_count) * 2;

}	
