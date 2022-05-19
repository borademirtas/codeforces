#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

void solve(){
    ll n, m;
    cin >> n >> m;
    if(m >= n){cout << n; return;}
    n -= m;
    ll l = 0;
    ll r = 1514213561;
    while(r >= l){
        ll t = (l + r) / 2;
        ll num = (t * (1 + t)) / 2;
        ll num2 = ((t-1) * (t)) / 2;
        if(num >= n){r = t;}
        else{l = t;}
        if(num >= n && num2 < n){cout << t + m; return;}
    }
}

int main() {
    FAST;
    tc1;
}
