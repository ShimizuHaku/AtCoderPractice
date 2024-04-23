#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N,vector<int>(M));
    for (int i = 0; i < N; ++i){
        cin >> C[i];
        for (int j = 0; j < M; ++j){
            cin >> A[i][j];
        }
    }

    vector<int> realized(M,0);
    auto read = [&](int i, int& total) -> void {
        total += C[i];
        for (int j = 0; j < M; ++j){
            realized[j] += A[i][j];
        }
    };

    int ans = 1e9;
    for (int msk = 0; msk < (1 << N); ++msk){
        fill(realized.begin(),realized.end(),0);
        int tmp = 0;
        for (int i = 0; i < N; ++i){
            if (msk & (1 << i)) read(i,tmp);
        }
        
        bool ok = 1;
        for (int i = 0; i < M; ++i){
            if (realized[i] < X) ok = 0;
        }
        if (ok) ans = min(tmp,ans);
    }
    cout << (ans == 1e9 ? -1 : ans) << "\n";
    return 0;
}