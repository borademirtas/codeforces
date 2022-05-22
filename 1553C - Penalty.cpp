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
#define FIXED(A) cout << std::fixed << A << std::endl;
#define mod 1000000007

void solve(){
    string s;
    cin >> s;
    ll s1 = 0, s2 = 0, s1l = 5, s2l = 5, s1q = 0, s2q = 0;
    for(ll i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            if(s[i]  == '1'){s1++;}
            if(s[i]  == '?'){s1q++;}
            s1l--;
        }
        else{
            if(s[i]  == '1'){s2++;}
            if(s[i]  == '?'){s2q++;}
            s2l--;
        }
        if(s1+s1q > s2 + s2l){cout << i + 1 << "\n"; return;}
        if(s2+s2q > s1 + s1l){cout << i + 1 << "\n"; return;}
    }
    cout << 10 << "\n"; return;
}

int main() {
    FAST;
    tc;
}
