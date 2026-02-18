#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

const ll INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    int count1 = 0;
    int extra0 = 0;
    int extra0max = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max << endl;
}

int main() {
    fastio();

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}