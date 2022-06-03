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

ll n, m;
vp a;
vll ans;

void check(ll x){
    for(ll i = 0 ; i < m; i++){
        if(a[i].first > (a[i].second - 1) * x && a[i].first <= a[i].second * x){continue;}
        else{return;}
    }
    ans.pb(x);
}

void solve() {
    cin >> n >> m;
    a.resize(m);
    for(ll i = 0 ; i < m; i++){
        cin >> a[i].first >> a[i].second;
    }
    for(ll i =  1; i <= 100; i++){
        check(i);
    }
    set<ll> s;
    for(ll i = 0 ; i < ans.size(); i++){
        ll tot = n / ans[i]; if(n % ans[i] != 0){tot++;} s.insert(tot);
    }
    if(s.size() != 1){cout << -1; return;}
    else{cout << *s.begin();}

}

int main() {
    FAST;
    tc1;
}
