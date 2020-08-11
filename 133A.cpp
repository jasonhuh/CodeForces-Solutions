#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    bool found = false;
    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}