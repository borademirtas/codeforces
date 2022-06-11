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
   ll n, m;
   cin >> n >> m;
   vll a(n+1);
   a[0] = 0;
   for(ll i = 1; i <= n; i++){cin >> a[i];}
   a.pb(m);

   ll on = 0, off = 0;
   for(ll i = 1; i < a.size(); i++){
        if(i % 2 == 1){on += a[i] - a[i-1];}
        else{off += a[i] - a[i-1];}
   }
   ll best = on;
   ll cur = 0;
   for(ll i = 1; i < a.size(); i++){
       if(i % 2 == 1){on -= a[i] - a[i-1]; cur += a[i] - a[i-1]; }
       else{off -= a[i] - a[i-1];}
       best = max(best, cur + off - 1);
   }
   cout << best;
}

int main() {
    FAST;
    tc1;
}
