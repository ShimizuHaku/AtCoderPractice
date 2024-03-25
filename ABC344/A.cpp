#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    auto l = S.find('|');
    auto r = S.rfind('|');
    
    cout << S.substr(0, l) << S.substr(r+1, S.size()) << endl;
    return 0;
}