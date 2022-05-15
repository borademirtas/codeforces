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
#define PB push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);
#define vp vector<pair<ll,ll>>
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve();}
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

int main() {
    FAST;
    ll n;
    ll total = 0;
    bool ok = true;
    cin >> n;
    vector<ll> a[10005];
    for(ll i = 0; i < n - 1; i++){
        ll x;
        cin >> x;
        a[x].push_back(i+2);
    }
    vll check;
    for(ll i = 1; i < n + 1; i++){
        if(!a[i].empty()){check.push_back(i);}
    }
    for(ll i = 0; i < check.size(); i++){
        ll count = 0;
        for(ll j = 0; j < a[check[i]].size(); j++ ){
            if(a[a[check[i]][j]].size() == 0){count++;}
        }
        if(count < 3){ok = false;}
    }
    if(ok){cout << "Yes";}
    else{cout << "No";}
}
