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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
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


void solve(){
    ll n, k;
    cin >> n >> k;
    vll a(n);
    ll dif = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        dif += a[i];
    }
    dif -= k;
    ll best = dif;
    if(dif <= 0){cout << 0 << "\n"; return;}
    if(n == 1){cout << dif << "\n"; return;}
    sort(all(a));
    reverse(all(a));
    vll mx(n);
    mx[0] = 0;
    for(ll i = 0; i < n - 1; i++){
        mx[i+1] = mx[i] + (a[i] - a[n-1]);
    }
    for(ll i = 1; i < n; i++){
        ll cdif = dif - mx[i];
        if(cdif <= 0){best = min(best, i);}
        else{
            ll div = rounddiv(cdif, (i+1));
            best = min(best, i + div);
        }
    }
    cout << best << "\n"; return;
}

int main() {
    FAST;
    tc;
}
