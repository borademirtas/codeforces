#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <fstream>
#include <string>
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
#define tc ll t; cin >> t; for(ll i = 0; i < t; i++){solve(i+1);}
#define tc1 solve(1);
#define mpvll map<ll, vll>
#define vfast vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
#define mpll unordered_map<ll,ll>
#define cout std::cout
#define vll2 vector<vector<ll>> a(n, vector<ll>(m));
#define FIXED(A) cout.precision(20); cout << (A) << "\n";
#define mod 1000000007
#define mp(A, B) make_pair(A, B)
#define all(x) (x).begin(), (x).end()
ll rounddiv(ll x, ll y){ll ans = x / y; if(x % y != 0){ans++;} return ans;}



void solve(ll TC){
    ll n;
    cin >> n;
    vll a(n); for (ll i = 0; i < n; i++) { cin >> a[i]; }
    vector<string> s(n);
    vector<string> rev(n);
    vector<vector<ll>> dp(n, vector<ll>(2));
    for(ll i = 0; i < n; i++){
        cin >> s[i];
        rev[i] = s[i];
        reverse(all(rev[i]));
        dp[i][0]=1000000000000000; dp[i][1]=1000000000000000;
    }
    dp[0][0] = 0;
    dp[0][1] = a[0];
    for(ll i = 1; i < n; i++){
        if(s[i-1]<=s[i]){dp[i][0]=dp[i-1][0];}
        if(s[i]>=rev[i-1]){dp[i][0]=min(dp[i][0],dp[i-1][1]);}
        if(rev[i]>=s[i-1]){dp[i][1]=dp[i-1][0]+a[i];}
        if(rev[i]>=rev[i-1]){dp[i][1]=min(dp[i][1],dp[i-1][1]+a[i]);}
    }
    ll ans = min(dp[n-1][0],dp[n-1][1]);
    if(ans == 1000000000000000){cout << -1;}
    else{cout << ans;}
}


int main(){
    FAST;
    tc1;
}
