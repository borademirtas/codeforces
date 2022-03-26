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
	ll count = 0, num = 0;
	string s;
	cin >> s;
	while (s.size() != 1) {
		for (ll i = 0; i < s.size(); i++) {
			num += s[i] - 48;
		}
		count++;
		s = to_string(num);
		num = 0;
	}
	cout << count;
}
	
