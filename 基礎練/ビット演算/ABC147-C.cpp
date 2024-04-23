#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    vector<vector<int>> x(N), y(N);
    for (int i = 0; i < N; ++i){
        cin >> A[i];
        x[i].resize(A[i]);
        y[i].resize(A[i]);
        for (int j = 0; j < A[i]; ++j) cin >> x[i][j] >> y[i][j];
    }

    int S = 1 << N;
    int ans = 0;
    for (int i = 0; i < S; ++i){
        bool ok = 1;
        for (int j = 0; j < N; ++j){
            if (!(i & (1 << j))) continue;
            for (int k = 0; k < A[j]; ++k){
                bool honest = i & (1 << x[j][k]-1);
                if (!(honest ^ y[j][k])) continue;
                else ok = 0;
            }
        }
        if (!ok) continue;
        int honest = 0;
        for (int j = 0; j < N; ++j){
            if (i & (1 << j)) honest++;
        }
        ans = max(honest,ans);
    }
    cout << ans << "\n";
    return 0;
}