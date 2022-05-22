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

void solve(){
   ll n;
   cin >> n;
   mpll b;
   ll dc = 0;
   ll best = n;
   vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i];  b[a[i]]++; if(b[a[i]] == 2){dc++;}}
   if(dc == 0){cout << 0; return;}
   for(ll i = 0 ; i < n; i++){
       mpll c = b;
       ll ldc = dc;
       for(ll j = i; j < n; j++){
           c[a[j]]--;
           if(c[a[j]] == 1){ldc--;}
           if(ldc == 0){best = min(j - i + 1, best);}
       }
   }
   cout << best;
}

int main() {
    FAST;
    tc1
}
