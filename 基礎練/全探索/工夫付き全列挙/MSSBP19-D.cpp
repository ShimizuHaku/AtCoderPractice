#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    string S(N+1,'#');
    cin >> N >> S;

    int ans = 0;
    for (int i = 0; i < 1000; ++i){
        int tmp = i;
        int p = 0;
        bool possible = 1;
        for (int j = 0; j < 3; ++j){
            int tar = tmp%10;
            for (; p <= N; ++p){
                if (S[p] == ('0'+tar)){
                    ++p;
                    tmp /= 10;
                    break;
                }
                if (p == N){
                    possible = 0;
                }
            }
        }
        if (!possible) continue;
        ++ans;
    }
    cout << ans << "\n";
    return 0;
}