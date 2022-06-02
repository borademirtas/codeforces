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

ll n;
vll a;
vll b;

bool check(ll x){
    ll count = 0;
    for(ll i = 0; i < n; i++){
        if(x - 1 - count <= a[i] && count <= b[i]){count++;}
    }
    if(count >= x){return true;}
    else{return false;}
}

void solve() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    ll l = -1, r = n + 1;
    while(r - l > 1){
        ll m = (l+r) / 2;
        if(check(m)){l = m;}
        else{r = m;}
    }
    cout << l << "\n";
}

int main() {
    FAST;
    tc;
}
