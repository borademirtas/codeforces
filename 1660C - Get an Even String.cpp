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
        string s;
        cin >> s;
        ll l = 0, r = 0;
        ll ans = 0;
        ll lastclear = 0;
        map<char, vector<ll>> d;
        for (ll i = 0; i < s.size(); i++) {
            d[s[i]].push_back(i);
            if (d[s[i]].size() == 2) { ans += i - lastclear - 1; if (lastclear != 0) { ans--; } lastclear = i; d.clear(); }
        }
        if (lastclear == 0) { cout << s.size() << "\n"; return; }
        ll num = s.size() - (lastclear + 1);
        cout << ans + num << "\n"; return;
    }
    int main() {
        FAST;
        tc;
    }
