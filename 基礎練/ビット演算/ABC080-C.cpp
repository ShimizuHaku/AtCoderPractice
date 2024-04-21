#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector F(N,vector<int>(10));
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < 10; ++j) cin >> F[i][j];
    }
    vector P(N,vector<int>(11));
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < 11; ++j){
            cin >> P[i][j];
        }
    }

    int ans = INT_MIN;
    for (int msk = 1; msk < (1 << 10); ++msk){
        vector<int> c(N,0);
        for (int i = 0; i < 10; ++i){
            if (msk & (1 << i)){
                for (int j = 0; j < N; ++j){
                    if (F[j][i]) ++c[j];
                }
            }
        }

        int tmp = 0;
        for (int i = 0; i < N; ++i){
            tmp += P[i][c[i]];
        }
        ans = max(ans,tmp);
    }
    cout << ans << "\n";
    return 0;
}