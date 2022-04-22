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
#include <list>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll> b;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

int main() {
	FAST;
	string s;
	cin >> s;
	ll MOD = pow(10, 9) + 7;
	vll dp(s.size()  + 1);
	dp[0] = 1;
	dp[1] = 1;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] == 'w' || s[i] == 'm') { cout << 0; return 0; }
	}
	for (ll i = 2; i <= s.size(); i++){
		dp[i] = dp[i - 1];
		if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n')) {
			dp[i] = (dp[i] + dp[i - 2]) % MOD;
		}
	}

	cout << dp[s.size()];

}
	
