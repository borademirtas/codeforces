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

string s;


bool check(ll m, vll a) {
    ll x = a.size() - m;
    for(ll i = 0; i <= m; i++){
        ll l = a[i];
        ll r = a[i + x -1];
        if(r - l + 1 - x <= m){return true;}
    }
    return false;
}


void solve(ll TC){
    cin >> s;
    vll a;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == '1'){a.pb(i); }
    }
    ll l = 0, r = a.size();
    while(r - l > 1){
        ll m = (l+r) / 2;
        bool ok = check(m, a);
        if(ok){r = m;}
        else{l = m;}
    }
    if(a.size() == 0 || a[a.size() - 1] - a[0] == a.size() - 1){cout << 0 << "\n";}
    else{cout << r  << "\n";}
}

int main() {
    FAST;
    tc;
}
