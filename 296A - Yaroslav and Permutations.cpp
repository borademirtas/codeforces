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
	ll n, top = 1, streak = 1;
	cin >> n;
	vector<ll> arr(n);
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (ll i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]) { streak++; top = max(top, streak); }
		else { streak = 1; }
	}
	if ((n+1) / 2 >= top) { cout << "YES"; }
	else { cout << "NO"; }
}	
