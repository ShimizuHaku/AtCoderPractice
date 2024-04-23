#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<int> k(M), p(M);
    vector<vector<int>> s(M);
    for (int i = 0; i < M; ++i){
        cin >> k[i];
        s[i].resize(k[i]);
        for (int j = 0; j < k[i]; ++j) cin >> s[i][j]; 
    }
    for (int i = 0; i < M; ++i) cin >> p[i];

    int S = 1 << N;
    int ans = 0;
    for (int i = 0; i < S; ++i){
        int cnt = 0;
        for (int j = 0; j < M; ++j){
            int on = 0;
            for (int l = 0; l < k[j]; ++l){
                if (i & (1 << (s[j][l]-1))) on++;
            }
            if (on % 2 == p[j]) cnt++;
        }
        if (cnt == M) ans++;
    }
    cout << ans << "\n";
    return 0;
}