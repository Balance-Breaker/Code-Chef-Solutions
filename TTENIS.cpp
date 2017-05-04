#include <iostream>
#include <ios>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int z;
    cin >> z;
    while (z--) {
        string s;
        cin >> s;
        cout << (s[s.length()-1] == '1' ? "WIN\n" : "LOSE\n");
    }
    return 0;
}