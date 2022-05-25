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

string s1, s2;

bool check(ll a, ll b){
    ll l = 0;
    string s;
    for(ll i = 0; i < a; i++){
        s.pb(s1[i]);
    }
    for(ll i = b + 1; i < s1.size(); i++){s.pb(s1[i]);}
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == s2[l]){l++;}
        if(l == s2.size()){break;}
    }
    if(l == s2.size()){return true;}
    else{return false;}
}

void solve(){
    cin >> s1 >> s2;
    ll best = 0;
    for(ll i = 0; i < s1.size(); i++){
        for(ll j = i; j < s1.size(); j++){
           if(check(i, j)){best = max(best, j - i + 1);}
        }
    }
    cout << best;
}

int main() {
    FAST;
    tc1;
}
