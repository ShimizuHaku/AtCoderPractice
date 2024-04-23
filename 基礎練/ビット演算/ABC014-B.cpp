#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, X;
    cin >> n >> X;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long ans = 0;
    for (int i = 0; i < n; ++i){
        if (X & (1 << i)) ans += (long long) a[i];
    }
    cout << ans << "\n";
    return 0;
}