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
using namespace std;
#define ll long long 



int main() {
	ll n, r = -1, c = -1;
	cin >> n;
	vector <char> letters{ 'a', 'e', 'i', 'o', 'u'};
	string s = "aeiou";
	if (n < 25) { cout << -1; return 0; }
	for (ll i = 5; i <= sqrt(n); i++) {
		if (n % i == 0 && n / i >= 5) { r = i; c = n / i; }
	}
	if(r == -1){ cout << -1; return 0; }
	for (ll i = 0; i < c; i++) {
		cout << letters[i % 5];
		cout << letters[(i + 1) % 5];
		cout << letters[(i + 2) % 5];
		cout << letters[(i + 3) % 5];
		cout << letters[(i + 4) % 5];
		if (r > 5) {
			for (ll j = 0; j < r - 5; j++) {
				cout << letters[i % 5];
			}
		}
	}
}
