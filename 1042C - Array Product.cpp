#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
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
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(){
    ll n;
    cin >> n;
    vll z;
    vp pos;
    vp neg;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; if(a[i] > 0){pos.pb(mp(a[i], i+1));} if(a[i] < 0){neg.pb(mp(a[i], i+1));} if(a[i] == 0){z.pb(i+1);} }
    sort(all(pos));
    sort(all(neg));
    if(pos.size() == 0 && neg.size() == 1){
        ll target = neg[0].second;
        for(ll i = 0; i < z.size(); i++){
            cout << 1 << " " << z[i] << " " << target  << "\n";
        }
        return;
    }
    if(pos.size() == 0 && neg.size() == 0){
        ll target = z[0];
        for(ll i = 1; i < z.size(); i++){
            cout << 1 << " " << z[i] << " " << target  << "\n";
        }
        return;
    }
    if(pos.size() == 0 && neg.size() > 1 && z.size() > 0){
        ll target = z[0];
        for(ll i = 1; i < z.size(); i++){
            cout << 1 << " " << z[i] << " " << target  << "\n";
        }
        if(neg.size() % 2 == 1){
            cout << 1 << " " << neg[neg.size() - 1].second << " " << target << "\n";
        }
        cout << 2 << " " << target << "\n";
        target = neg[0].second;
        for(ll i = 1; i < neg.size() / 2 * 2; i++){
            cout << 1 << " " << neg[i].second << " " << target << "\n";
        }
        return;
    }
    if(pos.size() == 0 && neg.size() > 1 && z.size() == 0){
        if(neg.size() % 2 == 1){
            cout << 2 << " " << neg[neg.size() - 1].second << "\n";
        }
        ll target = neg[0].second;
        for(ll i = 1; i < neg.size() / 2 * 2; i++){
            cout << 1 << " " << neg[i].second << " " << target << "\n";
        }
        return;
    }
    if(pos.size() > 0 && z.size() == 0){
        if(neg.size() % 2 == 1){
            cout << 2 << " " << neg[neg.size() - 1].second << "\n";
        }
        ll target = pos[0].second;
        for(ll i = 1; i < pos.size(); i++){
            cout << 1 << " " << pos[i].second << " " << target << "\n";
        }
        for(ll i = 0; i < neg.size() / 2 * 2; i++){
            cout << 1 << " " << neg[i].second << " " << target << "\n";
        }
        return;
    }
    ll target = z[0];
    for(ll i = 1; i < z.size(); i++){
        cout << 1 << " " << z[i] << " " << target  << "\n";
    }
    if(neg.size() % 2 == 1){
        cout << 1 << " " << neg[neg.size() - 1].second << " " << target << "\n";
    }
    cout << 2 << " " << target << "\n";
    target = pos[0].second;
    for(ll i = 1; i < pos.size(); i++){
        cout << 1 << " " << pos[i].second << " " << target << "\n";
    }
    for(ll i = 0; i < neg.size() / 2 * 2; i++){
        cout << 1 << " " << neg[i].second << " " << target << "\n";
    }
}

int main() {
    FAST;
    tc1;
}
