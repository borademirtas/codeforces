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
	ll n, total = 0, num, num2;
	cin >> n;
	string s = to_string(n), s1, s2;
	if (s[0] == '1') {
		num = pow(10, s.size() - 1) - 1;
		num2 = n - num;
	}
	else {
		num = pow(10, s.size() - 1) - 1 + ((s[0] - 49) * pow(10, s.size() - 1));
		num2 = n - num;
	}
	s1 = to_string(num);
	s2 = to_string(num2);
	for (ll i = 0; i < s1.size(); i++) {
		total += s1[i] - 48;
	}
	for (ll i = 0; i < s2.size(); i++) {
		total += s2[i] - 48;
	}
	cout << total;
}
