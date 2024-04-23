#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; i+=2){
        int tmp = 0;
        for (int j = 1; j <= i; ++j){
            if (!(i % j)) ++tmp;
        }
        if (tmp == 8) ++ans;
    }
    cout << ans << "\n";
    return 0;
}