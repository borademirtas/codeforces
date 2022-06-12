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
   ll k, n;
   cin >> k >> n;
   vll a(k);
   vll b(n);
   mpll c;
   for (ll i = 0; i < k; i++) { cin >> a[i]; }
   for (ll i = 0; i < n; i++) { cin >> b[i]; }
   for(ll i = 1; i < k; i++){a[i] += a[i-1];}
   ll count = 0;
   for(ll i = 0; i < n; i++){
       set<ll> s;
       for(ll j = 0; j < k; j++){
           s.insert(b[i] - a[j]);
       }
       for(ll u : s){
           c[u]++;
           if(c[u] == n){count++;}
       }
   }

   cout << count;
}

int main() {
    FAST;
    tc1;
}
