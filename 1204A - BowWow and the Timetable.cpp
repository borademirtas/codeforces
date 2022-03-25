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
	string s;
	cin >> s;
	if (s.size() == 1) { cout << 0; return 0; }
	sort(s.begin(), s.end());
	if (s[s.size() - 2] == '1') { cout << (s.size() + 1) / 2; }
	else { cout << (s.size()) / 2; }
}	
