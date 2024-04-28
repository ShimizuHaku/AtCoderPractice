#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    int q; 
    cin >> q;
    vector<int> m(q);
    for (int i = 0; i < q; ++i) cin >> m[i];

    int S = 1 << n;
    for (int f = 0; f < q; ++f){
        for (int msk = 0; msk < S; ++msk){
            int tmp = 0;
            for (int i = 0; i < n; ++i){
                if (msk & (1 << i)) tmp += A[i];
            }
            if (tmp == m[f]) {
                cout << "yes\n";
                break;
            }
            if (msk == S-1) cout << "no\n";
        }
    }
    return 0;
}