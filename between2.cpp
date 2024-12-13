#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int lcm_a = a[0];
    for (int i = 1; i < n; i++) {
        lcm_a = lcm(lcm_a, a[i]);
    }
    int gcd_b = b[0];
    for (int i = 1; i < m; i++) {
        gcd_b = gcd(gcd_b, b[i]);
    }
    int count = 0;
    for (int x = lcm_a; x <= gcd_b; x += lcm_a) {
        if (gcd_b % x == 0) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}