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
#define mp(A, B) make_pair[A, B]


void solve(){
    ll n;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    mpll b;
    multiset<ll> s;
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        if(b[a[i]] != 0){
            s.erase(s.lower_bound(b[a[i]]));
        }
        b[a[i]]++;
        s.insert(b[a[i]]);
        if(s.size() == 1){ans = i + 1;}
        if(*s.begin() == *--s.end() && *--s.end() == 1){ans = i + 1;}
        if(*s.begin() == 1 && *++s.begin() == *--s.end()){ans = i + 1;}
        if (s.size() >= 2) {
            auto it = s.end();
            --it;
            --it;
            if(*s.begin() == *it && *--s.end() - 1 == *it){ans = i + 1;}
        }
    }
    cout << ans;
}


int main() {
    FAST;
    tc1;
}
