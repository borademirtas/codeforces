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


void solve(){
    ll n, m;
    mpll td;
    mpll day;
    map<ll, vll> times;
    cin >> n >> m;
    for(ll i = 0; i < m; i++){
        ll x, y, z;
        cin >> x >> y >> z;
        td[y]++;
        day[y] = i + 1;
        for(ll j = 0; j < z; j++){times[x].pb(y * -1);}
    }
    vll ans;
    priority_queue<ll> q;
    for(ll i = 1; i <= n; i++){
        if(td[i] == 1){ans.pb(m+1);}
        for(ll j = 0; j < times[i].size(); j++){q.push(times[i][j]);}
        if(!q.empty() && q.top() * -1 == i){cout << -1; return;}
        if(td[i] != 1){
            if(!q.empty()){ans.pb(day[q.top() * -1]);q.pop();}
            else{ans.pb(0);}
        }
    }
    for(ll i = 0; i < n; i++){cout << ans[i] << " ";}
}

int main() {
    FAST;
    tc1;
}
