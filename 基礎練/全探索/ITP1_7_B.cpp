#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    int ans = 0;
    for (int i = 1; i <= n-2; ++i){
        for (int j = i + 1; j <= n-1; ++j){
            int tar;
            if ((tar = x-i-j) <= j) continue;
            for (int k = j + 1; k <= n; ++k){
                if (tar == k) ++ans;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}