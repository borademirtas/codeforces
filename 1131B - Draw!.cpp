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



int main() {
	FAST;
	ll n, total = 0;
	cin >> n;
	vll a(n + 1); vll b(n + 1); b[0] = 0; a[0] = 0; for (ll i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		if(b[i-1] == a[i-1] && i != 1) { total += max(min(a[i], b[i]) - max(a[i - 1], b[i - 1]), total - total); }
		else{ total += max(min(a[i], b[i]) - max(a[i - 1], b[i - 1]) + 1, total - total); }
	}
	cout << total;
}
	
