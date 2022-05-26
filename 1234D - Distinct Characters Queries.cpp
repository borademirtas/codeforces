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

string s;
map<ll, set<ll>> a;


void solve(){
    cin >> s;
    for(ll i = 0; i < s.size(); i++){
        a[s[i]].insert(i+1);
    }
    ll q;
    cin >> q;
    for(ll i = 0; i < q; i++){
        ll t;
        cin >> t;
        if(t == 1){
            ll x; char c;
            cin >> x >> c;
            a[s[x-1]].erase(x);
            a[c].insert(x);
            s[x-1] = c;
        }
        else{
            ll l, r;
            cin >> l >> r;
            ll count = 0;
            for(ll j = 'a'; j <= 'z'; j++){
                if(a[j].empty()){continue;}
                auto it = a[j].lower_bound(l);
                ll num = *it;
                if(num <= r  && num >= l){count++;}
            }
            cout << count << '\n';
        }
    }
}

int main() {
    FAST;
    tc1;
}
