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

void solve(){
    ll n,m,k;
    cin >> n >> m >> k;
    vll a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    vector<bool> used(1e6 + 5, false);
    ll r = k - 1;
    ll l = 0;
    ll count = 0;
    if(k == 1){cout << n; return;}
    while(r != n){
        if(used[l]){l++;}
        else{
            if(a[r] - a[l] < m){count++; used[r] = true; r++;}
            else{l++; r++;}
        }
    }
    cout << count;
}

int main() {
    FAST;
    tc1;
}
