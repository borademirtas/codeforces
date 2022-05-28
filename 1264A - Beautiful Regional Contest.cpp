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


void solve(){
    ll n;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    vll nc;
    ll l = 0;
    ll count = 1;
    for(ll i = 1; i < n; i++){
        if(a[l] == a[i]){count++;}
        else{nc.pb(count); l = i; count = 1;}
    }
    nc.pb(count);
    if(nc.size() < 4){cout << 0 << " " << 0 << " " << 0 <<'\n'; return;}
    ll total = nc[0];
    ll g = nc[0];
    ll s = 0;
    l = 1;
    while(l != nc.size()){
      s += nc[l];
      l++;
      if(s > g){break;}
    }
    if(s <= g){cout << 0 << " " << 0 << " " << 0 <<'\n'; return;}
    total += s;
    ll b= 0;
    for(ll i = l; i < nc.size(); i++){
        total += nc[i];
        if(total > n / 2){break;}
        b += nc[i];
    }
    if(b <= g){cout << 0 << " " << 0 << " " << 0 <<'\n'; return;}
    cout << g << " " << s << " " << b <<'\n';
}

int main() {
    FAST;
    tc;
}
