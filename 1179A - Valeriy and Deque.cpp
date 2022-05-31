#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <numeric>
#include <queue>
#include <list>
#include <deque>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)


void solve() {
   deque<ll> q;
   ll n, t;
   cin >> n >> t;
   map<ll, pair<ll, ll>> b;
   mpll c;
   vll a(n);
   ll top = 0;
   for(ll i = 0; i < n; i++){
       cin >> a[i];
       q.push_back(a[i]);
       top = max(top, a[i]);
   }
   ll target = 0;
   for(ll i = 0; i < n; i++){
       ll x = q.front();
       q.pop_front();
       ll y = q.front();
       q.pop_front();
       b[i+1] = mp(x, y);
       q.push_front(max(x,y));
       q.push_back(min(x, y));
       if(x == top){target = i + 1; c[0] = y; break;}
   }
   for(ll i = 1; i < n -1; i++){
       ll x = q.front();
       q.pop_front();
       ll y = q.front();
       q.pop_front();
       c[i] = y;
       q.push_front(max(x,y));
       q.push_back(min(x, y));
   }
   for(ll i = 0; i < t; i++){
       ll x;
       cin >> x;
       if(x < target){cout << b[x].first << " " << b[x].second << "\n";}
       else{cout << top << " " << c[(x-target) % (n-1)] << "\n";}
   }
}

int main() {
    FAST;
    tc1;
}
