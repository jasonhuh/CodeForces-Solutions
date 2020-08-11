#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

string solve(unordered_map<int, int> count) {
    int a, b, c;
    a = b = c = 0;
    for (auto elem : count) {
        int cur = elem.second;
        
        if (cur <= 1) continue;

        if (a == 0 && cur >= 4) {
            a = 4;
            cur -= 4;
        }
        if (b == 0 && cur >= 2) {
            b = 2;
            cur -= 2;
        }
        if (c == 0 && cur >= 2) {
            c = 2;
            cur -= 2;
        }

        if (a == 4 && b == 2 && c == 2) {
            return "YES\n";
        }
    }

    return "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int n; cin >> n;
    int plank;
    string symbol;
    unordered_map<int, int> count;
    for (int i = 0; i < n; ++i) {
        cin >> plank;
        count[plank]++;
    }
    int m; cin >> m;
    string res = "";
    vi freq(4, 0); 8, 6, 2, 2
    for (int i = 0; i < m; ++i) {
        cin >> symbol >> plank;
        if (symbol == "+")
            count[plank]++;
        else if (symbol == "-")
            count[plank]--;
        if (count[plank] >= 8)
        res += solve(freq);
    }
    cout << res;
}
