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
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout << std::fixed << A << std::endl;

int main() {
    FAST;
    ll n;
    cin >> n;
    ll total = 0;
    vfast;
    if(n < 4){cout << 0; return 0;}
    sort(a.begin(), a.end());
    mpll b;
    for(ll i = 0; i < n; i++){
        b[a[i]]++;
    }
    vll un;
    un.pb(a[0]);
    for(ll i = 1; i < n; i++){if(a[i] != a[i-1]){un.pb(a[i]);}}
    reverse(un.begin(), un.end());
    for(long long & i : un){
        if(b[i] % 2 == 1){b[i]--; b[i -1 ]++;}
    }
    un.clear();
    for(ll i = pow(10, 6); i > 0; i--){
        b[i] /= 2;
        if(b[i] != 0){un.pb(i);}
    }
    ll l = 0;
    if(un.empty()){cout << 0; return 0;}
    while(l != un.size() - 1){
        total += (b[un[l]] / 2 ) * (un[l] * un[l] );
        b[un[l]] %= 2;
        if(b[un[l]] == 1){total += un[l] * un[l+1]; b[un[l+1]]--; }
        l++;
    }
    total += (b[un[l]] / 2 ) * (un[l] * un[l]);
    cout << total;
}
