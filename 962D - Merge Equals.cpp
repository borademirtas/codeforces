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
#define mp(A, B) make_pair(A, B)


void solve(){
    ll n;
    cin >> n;
    mpll nums;
    map<ll, vll> pos;
    vll a(n); for (ll i = 0; i < n; i++) {
        cin >> a[i];
        nums[a[i]]++;
        pos[a[i]].pb(i);
        if(nums[a[i]] == 2){
            ll target = a[i];
            while(nums[target] == 2){
                nums[target] = 0; nums[target * 2]++; a[pos[target][1]] = target * 2; a[pos[target][0]] = 0; pos[target * 2].pb(pos[target][1]); pos[target].clear();
                target *= 2;
            }
        }
    }
    vll ans;
    for(ll i = 0; i < n; i++){if(a[i] != 0){ans.pb(a[i]);}}
    cout << ans.size() << "\n";
    for(ll i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
}

int main() {
    FAST;
    tc1;
}
