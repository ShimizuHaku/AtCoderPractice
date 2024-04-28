#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N),B(N);
    for (int i = 0; i < N; ++i) cin >> A[i] >> B[i];

    long long ans = 1e18;
    for (int i = 0; i < 2*N; ++i){
        int s;
        if (i < N) s = A[i];
        else s = B[i-N];
        for (int j = 0; j < 2*N; ++j){
            int t;
            if (j < N) t = A[j];
            else t = B[j-N];
            long long tmp = 0;
            for (int k = 0; k < N; ++k){
                tmp += (long long)abs(s-A[k]) + abs(A[k]-B[k]) + abs(B[k]-t);
            }
            ans = min(ans,tmp);
        }
    }
    cout << ans << "\n";
    return 0;
}