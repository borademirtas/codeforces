#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>  
#include <fstream>
#include <string>
#include <cctype>
#include <bitset>
#include <math.h>
#include <map>
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
#define FIXED(A) cout << std::fixed << A << std::endl;

void solve() {
    ll n;
    cin >> n;
    vll a(n);
    ll lastnum = -1;
    bool ok = true;
    for (ll i = 0; i < n; i++) { cin >> a[i]; if (a[i] != i + 1) { ok = false; } if (ok == true && a[i] == i + 1) { lastnum = i; } }
    if (ok == true) { cout << 0 << "\n"; return; }
    ok = true;
    bool start = true;
    bool startok = true;
    bool endok = true;
    bool end = true;
    for (ll i = 0; i < n; i++) {
        if (a[i] != i + 1 && start == true) { start = false; }
        if (start == false && a[i] == i + 1) { startok = false; }
    }
    for (ll i = n - 1; i >= 0; i--) {
        if (a[i] != i + 1 && end == true) { end = false; }
        if (end == false && a[i] == i + 1 && i > lastnum) { endok = false; }
    }
    if (startok == true || endok == true) { cout << 1 << "\n"; return; }
    cout << 2 << "\n";
}

int main() {
    FAST;
    tc; 
}
