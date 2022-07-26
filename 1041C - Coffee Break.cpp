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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define tc1 solve();
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}


ll d;

void solve(){
   multiset<ll> a;
   ll n, m;
   cin >> n >> m >> d;
   vll b;
   for(ll i = 0; i < n; i++){
       ll x;
       cin >> x;
       a.insert(x);
       b.pb(x);
   }
    ll count = 1 ;
    ll ln = 0;
    map<ll, multiset<ll>> c;
    while(!a.empty()){
        if(ln == 0){
            ln = *a.begin();
            a.erase(a.lower_bound(ln));
            c[ln].insert(count);
        }
        else{
            if(a.upper_bound(ln+d) == a.end()){count++; ln = 0; continue;}
            ln = *a.upper_bound(ln+d);
            a.erase(a.lower_bound(ln));
            c[ln].insert(count);
        }
    }
    cout << count << "\n";
    for(ll i = 0; i < n; i++){
        ll x =  *c[b[i]].begin();
        cout << x << " ";
        c[b[i]].erase(c[b[i]].lower_bound(x));
    }
}

int main() {
    FAST;
    tc1;
}
