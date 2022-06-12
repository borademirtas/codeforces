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
   ll n, l, r;
   cin >> n >> l >> r;
    vll lc(n+1);
    vll rc(n+1);
    ll tr = 0, tl = 0;
    vll a(n); for (ll i = 0; i < n; i++) {
       cin >> a[i];
       if(i < l){
           lc[a[i]]++;
           tl++;
       }
       else{
           rc[a[i]]++;
           tr++;
       }
   }

   for(ll i = 1; i <= n; i++){
       ll num = min(lc[i], rc[i]);
       lc[i] -= num; rc[i] -= num;
       tr -= num;
       tl -= num;
   }
   ll ans = min(tr, tl);
    if(tr > tl){
        ll dif = tr - tl;
        dif /= 2;
        ll pc = 0;
        for(ll i = 1; i <= n; i++){
            pc += rc[i] / 2;
        }
        if(pc >= dif){ans += dif;}
        else{
            ans += pc + ((dif - pc) * 2);
        }
    }
    if(tl > tr){
        ll dif = tl - tr;
        dif /= 2;
        ll pc = 0;
        for(ll i = 1; i <= n; i++){
            pc += lc[i] / 2;
        }
        if(pc >= dif){ans += dif;}
        else{
            ans += pc + ((dif - pc) * 2);
        }
    }
   cout << ans << "\n";
}

int main() {
    FAST;
    tc;
}
