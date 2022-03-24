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
	vector<ll>primes{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	ll n, m, prime_num;
	cin >> n >> m;
	if (n == 47) { cout << "NO"; return 0; }
	for (ll i = 0; i < primes.size(); i++) {
		if (n == primes[i]) { primes[i + 1] == m ? cout << "YES" : cout << "NO"; return 0; }
	}
}
