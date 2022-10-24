#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr);



void solve() {
    vector<vector<int>> cnt(205);
    int n; cin >> n; vector<int> a(n+5); int ans = 0;
    vector<vector<int>> dp(205, vector<int>(n+5));
    for(int i = 0; i < n; i++){
        cin >> a[i]; cnt[a[i]].pb(i);
        dp[a[i]][i+1]++;
    }
    for(int i = 1; i <= 200; i++){
        int num = cnt[i].size();
        ans = max(ans, num);
        for(int j = 1; j <= n; j++){
            dp[i][j] += dp[i][j-1];
        }
    }
    for(int i = 1; i <= 200; i++){
        int l = 0, r = cnt[i].size() - 1;
        while(r > l){
            for(int j = 1; j <= 200; j++){
                if(j == i){continue;}
                ans = max(ans, dp[j][cnt[i][r] + 1] - dp[j][cnt[i][l]] + (l+1) * 2);
            }
            r--; l++;
        }
    }
    cout << ans << "\n";
}

int main() {
    FAST;
    int x; cin >> x; for(int i = 0; i < x; i++){solve();}
}
