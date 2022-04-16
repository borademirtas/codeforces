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
#include <queue>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define MOD % 998244353
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout


int main() {
	FAST;
	ll n, ans = 1;
	vll nums;
	cin >> n;
	vll a(n);
	for (ll i = 0; i < n; i++) { cin >> a[i]; if (a[i] == 1) { nums.push_back(i); } }
	if (nums.size() == 1 || nums.size() == n ) { cout << 1; return 0; }
	if (nums.size() == 0) { cout << 0; return 0; }
	for (ll i = 1; i < nums.size(); i++) {
		ans *= nums[i] - nums[i - 1];
	}
	cout << ans;
}
