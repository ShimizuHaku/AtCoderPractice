#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    long long ans = 0;
    int whole = 1 << (S.size()-1);
    for (int msk = 0; msk < whole; ++msk){
        long long tmp = S[0]-'0';
        for (int i = 1; i < S.size(); ++i){
            if (msk & (1 << (i-1))){
                ans += tmp;
                tmp = S[i] - '0';
            }else{
                tmp *= 10;
                tmp += S[i] - '0';
            }
        }
        ans += tmp;
    }
    cout << ans << "\n";
    return 0;
}