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

void solve(ll TC, ll TC2){
   ll n, q;
   cin >> n >> q;
   vll b(32);
   vll a(n); for(ll i = 0; i < n; i++){
       ll x = -1;
       cin >> a[i];
       while(a[i] != 0){
           x++;
           a[i] /= 2;
       }
       b[x]++;
   }

   for(ll i = 0; i < q; i++){
       ll x;
       cin >> x;
       string bi = std::bitset<32>(x).to_string();
       reverse(all(bi));
       vll c(32);
       for(ll j = 0; j < bi.size(); j++){
           if(bi[j] == '1'){c[j]++;}
       }
       ll cc = 0;
       ll ans = INT_MAX;
       for(ll j = 31; j >= 0; j--){
           cc += c[j] - max(c[j] - b[j], n-n);
           c[j] = max(c[j] - b[j], n-n);
           if(j == 0 && c[j] != 0){ans = -1;}
           else{
               c[j-1] += c[j] * 2;
           }
       }
       cout << min(ans, cc) << "\n";
   }

}

int main() {
    FAST;
    tc1;
}
