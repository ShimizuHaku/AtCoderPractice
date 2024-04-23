#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long N, M;
    cin >> N >> M;
    vector A(N,vector<long long>(M));
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < M; ++j){
            cin >> A[i][j];
        }
    }

    long long ans = 0;
    for (int i = 0; i < M-1; ++i){
        for (int j = i+1; j < M; ++j){
            long long tmp = 0;
            for (int k = 0; k < N; ++k){
                tmp += max(A[k][i],A[k][j]);
            }
            ans = max(tmp,ans);
        }
    }
    cout << ans << "\n";
    return 0;
}