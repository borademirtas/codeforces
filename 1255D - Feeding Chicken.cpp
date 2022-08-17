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
      string point = "abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLNMOPQRSTUVWXYZ1234567890";
      ll  l = 0;
      ll r, c, k;
      cin >> r >> c >> k;
      string s;
      ll rc = 0;
      for(ll i = 0; i < r; i++){
          string x; cin >> x;
          if(i % 2 == 1){reverse(all(x));}
          for(char y: x){s.pb(y);  if(y == 'R'){rc++;} }
      }
      vector<char> ans(s.size());
      ll count = rc % k;
      ll target = rc / k;
      if(count != 0){target++;}
      ll lc = 0;
      bool ok = true;
      vector<string> str(r);
      ll num = 0;
      for(ll i = 0; i < s.size(); i++){
          if(l == count && l != 0 && ok){target--; ok = false;}
          if(s[i] == 'R'){lc++;}
          ans[i] = point[l];
          if(lc == target && l != k - 1){l++; lc = 0;}
      }
      for(ll i = 0; i <s.size(); i++){
          str[num].pb(ans[i]);
          if( (i+1) % c == 0){
              if(num % 2 == 1){
                  reverse(all(str[num]));
              }
              cout << str[num];
              cout << "\n"; num++;
          }
      }
}

int main() {
    FAST;
    tc;
}
