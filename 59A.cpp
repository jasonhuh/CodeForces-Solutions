#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    short lower = 0, upper = 0;
    for (char c : s) {
        if (islower(c)) lower++;
        else upper++;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (upper > lower) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
}