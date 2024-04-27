#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;

    int ans = 1e9;
    for (int i = 0; i <= max(X,Y); ++i){
        int tmp = i*2*C;
        int restX = X-i;
        int restY = Y-i;
        if (restX > 0) tmp += restX*A;
        if (restY > 0) tmp += restY*B;
        ans = min(ans,tmp);
    }

    cout << ans << "\n";
    return 0;
}