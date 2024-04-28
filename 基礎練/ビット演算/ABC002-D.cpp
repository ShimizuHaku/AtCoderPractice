#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<pair<int,int>> xy(M);
    for (int i = 0; i < M; ++i) cin >> xy[i].first >> xy[i].second;

    sort(xy.begin(),xy.end());

    int ans = 0;
    int S = 1 << N;
    for (int msk = 0; msk < S; ++msk){
        bool ok = 1;
        vector<int> member;
        for (int i = 0; i < N; ++i){
            if (msk & (1 << i)) member.push_back(i);
        }
        int n = __builtin_popcount(msk);
        for (int i = 0; i < n; ++i){
            for (int j = i+1; j < n; ++j){
                if (binary_search(xy.begin(),xy.end(),make_pair(member[i]+1,member[j]+1))) continue;
                ok = 0;
            }
        }
        if (ok) ans = max(ans, n);
    }
    cout << ans << "\n";
    return 0;
}