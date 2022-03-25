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
	string s;
	cin >> s;
	for (ll i = 0; i < s.size(); i++) {
		if (i == 0 && s[i] > '4') {
			if (s[i] == '9') { s[i] = s[i]; }
			else{ s[i] = 48 + '9' - s[i]; }
		}
		if (s[i] > '4' && i != 0) { s[i] = 48 + '9' - s[i]; }
	}
	cout << s;
}
