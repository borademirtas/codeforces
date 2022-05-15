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
#define FIXED(A) cout << std::fixed << (A) << std::endl;


int main() {
    FAST;
    ll n, total = 0;
    mpll even;
    mpll odd;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(((x - (x % 100)) / 100) % 2 == 0){even[x % 100]++; total += even[x % 100] - 1;}
        else{odd[x % 100]++; total += odd[x % 100] - 1;}
    }
    cout << total;
}
