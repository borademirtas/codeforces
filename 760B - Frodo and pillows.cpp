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

bool check(ll mid, ll n, ll m, ll k){
    ll left = k - 1;
    ll right = n - k;
    m -= n;
    mid--;
    m -= mid;
    mid--;
    ll num = 0;
    if(left >= mid){
        num += (mid * (1 + mid)) / 2;
    }
    else{
        num += (left * (mid + (mid - ((left - 1))))) / 2;
    }
    if(right >= mid){
        num += (mid * (1 + mid)) / 2;
    }
    else{
        num += (right * (mid + (mid - ((right - 1))))) / 2;
    }
    if(num > m){return false;}
    else{return true;}
}

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 0, r = m;
    if(n == 1){cout << m; return;}
    while(r >= l){
        ll mid = (l+r) / 2;
        bool ok1 = check(mid, n, m, k);
        bool ok2 = check(mid + 1, n, m, k);
        if(ok1 && !ok2){cout << mid; return;}
        if(ok1){l = mid; }
        else{r = mid;}
    }
}


int main() {
    FAST;
    tc1
}
