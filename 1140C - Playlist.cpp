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
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}

void solve(){
    ll n, k;
    cin >> n >> k;
    vp a(n);
    vll b(n);
    ll count = 0;
    for(ll i = 0 ; i < n; i++){
        cin >> a[i].second >> a[i].first;
        b[i] = a[i].second;
    }
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    mpll used;
    multiset<ll> unused;
    for(ll i = 0; i < k; i++){
        count += b[i];
        used[b[i]]++;
    }
    for(ll i = k; i < n; i++){
        unused.insert(b[i]);
    }
    ll best = 0;
    for(ll i = 0; i < n; i++){
        best = max(best, count * a[i].first);
        if(used[a[i].second] == 0){unused.erase(unused.lower_bound(a[i].second));}
        if(used[a[i].second] > 0 && !unused.empty()){count -= a[i].second; used[a[i].second]--; ll num = *--unused.end(); count += num; used[num]++; unused.erase(unused.lower_bound(num));}
        else if(used[a[i].second] > 0 && unused.empty()){count -= a[i].second; used[a[i].second]--;}
    }

    cout << best;
}

int main() {
    FAST
    tc1
}
