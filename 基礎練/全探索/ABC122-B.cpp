#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    int ans = 0;
    for (int l = 0; l < (int) S.size(); ++l){
        for (int n = 1; n <= (int) S.size() - l; ++n){
            string T = S.substr(l,n);
            bool ok = 1;
            for (auto&& e : T){
                if (e != 'A' && e != 'T' && e != 'G' && e != 'C') ok = 0;
            }
            if (ok) ans = max(ans, (int) T.size());
        }
    }
    cout << ans << "\n";
    return 0;
}