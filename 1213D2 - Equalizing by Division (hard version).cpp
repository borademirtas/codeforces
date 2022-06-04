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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << A << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()

vector<vll> b;

void check(ll x){
    ll c = 0;
    b[x].pb(0);
    while(x != 0){
        c++;
        x /= 2;
        b[x].pb(c);
    }
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll top = 1;
    vll a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        top = max(top, a[i]);
    }
    b.resize(top+1);
    for(ll i = 0; i < n; i++){
        check(a[i]);
    }
    for(ll i = b.size() - 1; i >= 1;  i--){
        if(b[i].size() >= k){sort(all(b[i]));}
    }
    ll best = INT_MAX;
    for(ll i = 1; i < b.size();  i++){
        ll count = 0;
        if(b[i].size() >= k){
            for(ll j = 0; j < k; j++){
                count += b[i][j];
            }
            best = min(count, best);
        }

    }
    cout << best;
}

int main() {
    FAST;
    tc1;
}
