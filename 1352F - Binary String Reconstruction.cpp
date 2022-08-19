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
      ll n1, n2, n3;
      cin >> n1 >> n2 >> n3;
      string s1, s2;
      swap(n2, n3);
      if(n1 == 0 && n2 == 0){
          for(ll i = 0; i <= n3; i++){
              if(i % 2 == 0){s1.pb('1');}
              else{s1.pb('0');}
          }
          cout << s1 << "\n"; return;
      }
      if(n1 != 0){for(ll i = 0; i <= n1; i++){s1.pb('0');}}
      if(n2 != 0){for(ll i = 0; i <= n2; i++){s2.pb('1');}}
      if(n2 == 0){
          for(ll i = 0; i < n3; i++){
              if(i % 2 == 0){s1.pb('1');}
              else{s1.pb('0');}
          }
      }
      else{
          ll target = n3 - 1;
          if(n1 == 0){target++;}
          for(ll i = 0; i < target; i++){
              if(i % 2 == 0){s2.pb('0');}
              else{s2.pb('1');}
          }
      }
      cout << s1 << s2 << '\n';
}

int main() {
    FAST;
    tc;
}
