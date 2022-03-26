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
	ll n, middle;
	string s;
	cin >> n >> s;
	vector<char> word(s.size());
	if (s.size() < 3) { cout << s; return 0; }
	if (n % 2 == 1) {
		middle = n / 2;
		word[middle] = s[0];
		for (ll i = 1; i < n; i++) {
			if (i % 2 == 1) { word[middle - (i + 1) / 2] = s[i]; }
			else{ word[middle + i / 2] = s[i]; }
		}
	}
	else{ 
		middle = n / 2 - 1 ;
		word[middle] = s[0];
		word[middle + 1] = s[1];
		for (ll i = 2; i < n; i++) {
			if (i % 2 == 0) { word[middle - i / 2] = s[i]; }
			else { word[middle + (i+1) / 2] = s[i]; }
		}

	}
	for (ll i = 0; i < n; i++) {
		cout << word[i];
	}
}
