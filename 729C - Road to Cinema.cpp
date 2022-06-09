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
    ll n, k, s, t;
    cin >> n >> k >> s >> t;
    vp a(n);
    vll b(k+1);
    b[0] = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i].second >> a[i].first;
    }
    for(ll i = 1; i <= k; i++){
        cin >> b[i];
    }
    sort(all(b));
    b.pb(s);
    sort(all(a));
    reverse(all(a));
    ll l = -1, r = 1e9 + 2;
    while(r - l > 1){
        ll m = (l+r)/2;
        bool ok = true;
        ll time = 0;
        for(ll i = 1; i < b.size(); i++){
            ll dif = m - (b[i] - b[i-1]);
            if(dif < 0){ok = false;}
            ll lt = (b[i] - b[i-1]) * 2;
            time += max(lt - dif, (b[i] - b[i-1]));
        }
        if(!ok || time > t){l = m;}
        else{r = m;}
    }
    ll best = INT_MAX;
    for(ll i = 0; i < n; i++){
        if(a[i].first > l){best = min(best, a[i].second);}
    }
    if(best == INT_MAX){cout << -1;}
    else{cout << best;}
}

int main() {
    FAST;
    tc1;
}
