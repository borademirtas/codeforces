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
#define mpll map<ll,ll>;
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

void solve() {
	ll n, q;
	cin >> n >> q;
	vll a(n);
	vector<vector<ll>> dp(2, vector<ll>(n+1));
	dp[0][0] = INT_MIN;
	dp[1][0] = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i]; 
		dp[0][i + 1] = max(dp[0][i], dp[1][i] + a[i]);
		dp[1][i + 1] = max(dp[1][i], dp[0][i] - a[i]);
	}
	cout << max(dp[1][n], dp[0][n]) << "\n";
	
}

int main() {
	FAST;
	tc;
}
