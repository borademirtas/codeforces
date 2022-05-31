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
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
ll n, q;
string s;
vp a;

ll power(unsigned long long y){
    ll res = 1;
    ll x = 2;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;


        y = y>>1;
         x = (x*x) % mod;
    }
    return res;
}

void solve(){
    ll l, r;
    cin >> l >> r;
    ll zc = a[r].second - a[l-1].second;
    ll oc = a[r].first - a[l-1].first;
    ll num1 = power(oc) - 1;
    ll num2 = power(zc);
    ll ans = (num1 * num2) % mod;
    cout << ans % mod << "\n";
}

int main() {
    FAST;
    cin >> n >> q >> s;
    a.resize(n+1);
    a[0].first = 0;
    a[0].second = 0;
    for(ll i = 0; i < n; i++){
        a[i+1].first = a[i].first;
        a[i+1].second = a[i].second;
        if(s[i] == '1'){a[i+1].first++;}
        else{a[i+1].second++;}
    }
    for(ll i = 0; i < q; i++){solve();}
}
