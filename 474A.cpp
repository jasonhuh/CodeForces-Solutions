#include <bits/stdc++.h>

using namespace std;

string solve(char dir, string s) {
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    unordered_map<char, int> char_map;
    for (int i = 0; i < keyboard.length(); ++i) {
        char_map[keyboard[i]] = i;
    }

    int offset = (dir == 'L') ? 1: -1;
    string res;
    for (int i = 0; i < s.length(); ++i) {
        res += keyboard[offset + char_map[s[i]]];
    }

    return res;
}

int main() {
    char dir; cin >> dir;
	string s; cin >> s;
    cout << solve(dir, s) << endl;
}
