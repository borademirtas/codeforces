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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, low = -1;
	cin >> n;
	vector<char> s(n);
	vector<ll> arr(n);
	for (ll i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (ll i = 0; i < n-1; i++) {
		if(s[i] == 'R' && s[i+1] == 'L'){
			if (low == -1) { low = (arr[1 + i] - arr[i]) / 2; }
			else { low = min(low, (arr[1 + i] - arr[i]) / 2); }
			
		}
	}
	cout << low;
}
