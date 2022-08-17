#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i, t);}
#define tc1 solve(1, 1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
#define tri pair<ll, pair<ll,ll>>
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}




void solve(ll TC, ll TC2) {
      ll n, m, d;
      cin >> n >> m >> d;
      string s = "aple";
      ll ans(n);
      vll plat(m);
      vll dif(m,0);
      ll sum = 0;
      for(ll i = 0; i < m; i++){cin >> plat[i]; sum += plat[i];}
      ll dist = (n+1) - sum - d;
      d--;
      for(ll i = 0; i < m; i++){
          if(dist <= 0){break;}
          else{
              ll x = min(dist, d);
              dist -= x;
              dif[i] = x;
          }
      }
      for(ll i = 0; i < m; i++){
          sum += dif[i];
      }
      if(dist <= 0){cout << "YES\n"; }
      else{cout << "NO\n"; return;}
      for(ll i = 0; i < m; i++){
          for(ll j = 0; j < dif[i]; j++ ){cout << 0 << " ";}
          for(ll j = 0; j < plat[i]; j++){cout << i + 1 << " ";}
      }
      for(ll i = sum; i < n; i++){
      cout << 0 << " ";
      }
}

int main() {
    FAST;
    tc1;
}
