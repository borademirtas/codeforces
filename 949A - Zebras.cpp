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


void solve(){
    set<ll> az;
    set<ll> z;
    string s;
    cin >> s;
    map<ll, vll> a;
    ll count = -1;
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            if(az.empty()){count++; a[count].pb(i+1); z.insert(count);}
            else{
                ll num = *az.begin();
                a[num].pb((i+1));
                az.erase(num);
                z.insert(num);
            }
        }
        if(s[i] == '1'){
            if(z.empty()){cout << -1; return;}
            else{
                ll num = *z.begin();
                a[num].pb(i+1);
                z.erase(num);
                az.insert(num);
            }
    }
    }
    if(!az.empty()){cout << -1; return;}
    cout << count + 1 << "\n";
    for(ll i = 0; i <= count; i++){
        cout << a[i].size() << " ";
        for(ll j = 0; j < a[i].size(); j++){cout << a[i][j] << " ";}
        cout << "\n";
    }

}

int main() {
    FAST;
    tc1;
}
