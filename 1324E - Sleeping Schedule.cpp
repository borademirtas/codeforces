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
   ll n, h,l , r;
   cin >> n >> h >> l >> r;
    vector<vector<bool>> dpb(n+1, vector<bool>(h, false));
    vector<vector<ll>> dpn(n+1, vector<ll>(h));
    dpb[0][0] = true;
    vll a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < h; j++){
            if(j >= l && j <= r && dpb[i][j] && i != 0){dpn[i][j]++;}
            if(dpb[i][j]){dpb[i+1][(j+a[i]) % h] = true; dpn[i+1][(j+a[i]) % h] = max(dpn[i][j],dpn[i+1][(j+a[i]) % h]);}
            if(dpb[i][j]){dpb[i+1][(j+a[i]-1) % h] = true;dpn[i+1][(j+a[i]-1) % h] = max(dpn[i][j],dpn[i+1][(j+a[i]-1) % h]);}
        }
    }
    ll ans = 0;
    for(ll j = 0; j < h; j++){
        if(j >= l && j <= r && dpb[n][j]){dpn[n][j]++;}
        ans = max(ans, dpn[n][j]);
    }
    cout << ans;
}

int main() {
    FAST;
    tc1;
}
