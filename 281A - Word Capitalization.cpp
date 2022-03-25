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
	if (s[0] < 'a') { cout << s; return 0; }
	else { s[0] -= 32; cout << s; }
}	
