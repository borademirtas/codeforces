#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <map>
#include <cmath>
#include <unordered_map>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
#include <stack>
#include <bitset>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i+1);}
#define tc1 solve(1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(ll TC){
    ll n;
    string s;
    cin >> n >> s;
    set<ll> zc;
    set<ll> oc;
    map<ll, vll> a;
    ll nw = 1;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0'){
            if(oc.empty()){zc.insert(nw); a[nw].pb(i); nw++; }
            else{
                ll num = *oc.begin();  a[num].pb(i); zc.insert(num); oc.erase(num);
            }
        }
        if(s[i] == '1'){
            if(zc.empty()){oc.insert(nw); a[nw].pb(i); nw++; }
            else{
                ll num = *zc.begin(); a[num].pb(i); oc.insert(num); zc.erase(num);
            }
        }
    }
    vll ans(n);
    cout << a.size() << "\n";
    for(ll i = 1; i <= a.size(); i++){
        for(ll j = 0; j < a[i].size(); j++){
            ans[a[i][j]] = i;
        }
    }
    for(ll u : ans){
        cout << u << " ";
    }
    cout << "\n";
}

int main() {
    FAST;
    tc;
}
