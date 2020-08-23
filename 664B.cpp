#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve() {
    int n, m , sx, sy; cin >> n >> m >> sx >> sy;

    unordered_set<int> visited;
    vector< pair<int, int> > paths;
    // step 1: go to (0, 0).
    int x = sx, y = sy, total = n * m;
    while (x >= 1 && y >= 1) {
        paths.push_back(make_pair(x, y));
        visited.insert(x*m + y);
        if (x == 1 && y == 1) {
            break;
        }
        if (x > 1) { // go up
            x--;            
        } else { // go left
            y--;
        }
    }

    // step 2: go to (n, m)
    int dir = 1; // 1: right, -1: left
    while (visited.size() < total) {
        if (!visited.count(x*m + y)) {
            visited.insert(x*m + y);
            paths.push_back(make_pair(x, y));
        }
        if ((y == 1 && dir == -1) || (y == m && dir == 1)) { // change direction
            dir *= -1;
            x++;
            continue;
        }        
        y += dir;
    }

    for (auto path : paths) {
        cout << path.first << " " << path.second << endl;        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	solve();
}
