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

    int n, m;
    cin >> n >> m;
    multiset<long long> prices;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        prices.insert(h);
    }
    vector<long long> max_prices(m);
    for(int i = 0; i < m; i++){
        cin >> max_prices[i];
    }
    for(int i = 0; i < m; i++){
        auto curr = prices.upper_bound(max_prices[i]);
        if(curr == prices.begin()){
            cout << "-1" << endl;
        }else{
            --curr;
            cout << *curr << endl;
            prices.erase(curr);
        }
    }
    return 0;
}