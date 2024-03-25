#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A;
    while(1){
        int tmp;
        cin >> tmp;
        if (tmp) A.push_back(tmp);
        else break;
    }

    reverse(A.begin(),A.end());
    for (auto&& e : A){
        cout << e << endl;
    }
    return 0;
}