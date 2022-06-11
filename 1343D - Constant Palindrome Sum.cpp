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
   ll l = 0, r = n -1;
   vll a(n);
   for (ll i = 0; i < n; i++) { cin >> a[i]; }

   mpll per;
   vll mn(k*2+1);
   vll mx(k*2+1);
   while(r > l){
       ll x = max(a[l], a[r]);
       ll y = min(a[l], a[r]);
       per[x+y]++;
       mn[y+1]++;
       mx[x + k]++;
       l++; r--;
   }

   ll best = n;
   ll num = 0;
   ll pos = n / 2;
   for(ll i = 2; i <= k * 2; i++){
        num += mn[i];
        num -= mx[i-1];
        ll count = num;
        count += (pos - num) * 2;
        count -= per[i];
        best = min(best, count);
   }
   cout << best << "\n";
}

int main() {
    FAST;
    tc;
}
