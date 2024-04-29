#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> x(N),y(N);
    for (int i = 0; i < N; ++i) cin >> x[i] >> y[i];

    auto dist = [&](int l, int r) -> double {
        double dx = x[l] - x[r];
        double dy = y[l] - y[r];
        return pow(dx*dx + dy*dy, 0.5);
    };

    double sum = 0.0;
    vector<int> v(N);
    iota(v.begin(),v.end(),0);
    do{
        for (int i = 0; i < N-1; ++i) sum += dist(v[i],v[i+1]);
    }while(next_permutation(v.begin(),v.end()));
    int Factorial = 1;
    for (int i = 1; i <= N; ++i) Factorial*=i;
    cout << fixed << setprecision(10) << sum / Factorial << "\n";
    return 0;
}