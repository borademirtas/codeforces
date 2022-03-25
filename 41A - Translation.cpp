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
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s2.begin(), s2.end());
	s1 == s2 ? cout << "YES" : cout << "NO";
}
