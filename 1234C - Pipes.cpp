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


void solve(){
    ll n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for(ll i = 0; i < n; i++){
        if(s1[i] > '2'){s1[i] = '1';}
        else{s1[i] = '0';}
        if(s2[i] > '2'){s2[i] = '1';}
        else{s2[i] = '0';}
    }
    ll cpv = 0, cph = 0;
    while(true){
        if(cph >= n){break;}
        if(cpv == 0){
            if(s1[cph] == '0'){cph++;}
            else{cpv++; if(s2[cph] == '0'){cout << "NO\n"; return;} cph++;}
        }
        if(cph >= n){break;}
        if(cpv == 1){
            if(s2[cph] == '0'){cph++;}
            else{cpv--;  if(s1[cph] == '0'){cout << "NO\n"; return;} cph++;}
        }
        if(cph >= n){break;}
    }
    if(cpv == 0){cout << "NO\n";}
    else{cout << "YES\n";}
}

int main() {
    FAST;
    tc;
}
