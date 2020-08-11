#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

double solve() {
    int n, l; cin >> n >> l;
    int a;
    vi lights;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        lights.push_back(a);
    }
    sort(lights.begin(), lights.end());

    int biggest_gap = 0;
    int prev = -lights.front();
    for (auto light : lights) {
        biggest_gap = max(biggest_gap, light - prev);
        prev = light;
    }
    // handle end
    biggest_gap = max(biggest_gap, 2 * (l - lights.back()));

    return biggest_gap / 2.0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // This also works: printf("%.10f\n", solve());
    cout << setprecision(9) << solve() << endl;    
}
