#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

const ll INF = 1e18;
const int MOD = 1e9 + 7;

int main() {
    fastio();

    int n;
    cin >> n;
    vector<pair<long long, long long>> input;
    while(n--){
        long long a, b;
        cin >> a >> b;
        input.push_back({a, 1});
        input.push_back({b, -1});
    }
    sort(input.begin(), input.end());
    long long curr = 0;
    long long mx = 0;
    for(auto i : input){
        curr += i.second;
        mx = max(mx, curr);
    }
    cout << mx << endl;
    return 0;
}