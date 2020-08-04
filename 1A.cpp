#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

ll solve(int m, int n, int a) {
    return ceil(double(m)/a) * ceil(double(n)/a);
}

int main() {
	int m, n, a; cin >> m >> n >> a;
    cout << solve(m, n , a) << endl;
}
