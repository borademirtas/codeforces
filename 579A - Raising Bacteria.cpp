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
	ll n, mult = 2, total = 0;
	string s;
	cin >> n;
	s = bitset<64>(n).to_string();
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == '1') { total++; }
	}
	cout << total;
}	
