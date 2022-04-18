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
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));	

int main() {
	FAST;
	ll n, total = 0;
	map<ll, ll> b;
	cin >> n;
	vll a(n); for (ll i = 0; i < n; i++) { 
		cin >> a[i]; map<ll, ll> local; ll num = a[i]; 
        while (num % 2 == 0)
        {
            if (local[2] == 0) { b[2]++; }
            total = max(total, b[2]);
            local[2]++;
            num = num / 2;
        }
        for (ll  j = 3; j <= sqrt(num); j = j + 2)
        {
            while (num % j == 0)
            {
                if (local[j] == 0) { b[j]++; total = max(total, b[j]);}
                local[j]++;
                num = num / j;
            }
        }
        if (num > 2) { if (local[num] == 0) { b[num]++; } total = max(total, b[num]);}
	}
    if (total == 0) { total++; }
    cout << total;
}
	
	
