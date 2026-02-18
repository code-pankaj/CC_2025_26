#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

const ll INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n, t;
    cin >> n >> t;
    vector<int> input(n);
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }
    int sum = 0;
    int maxLength = 0;
    int i = 0, j = 0;
    while(j < n){
        if(sum+input[j] < t){
            sum += input[j];
            j++;
        }else{
            sum += input[j];
            while(sum > t){
                sum -= input[i];
                i++;
            }
            j++;
        }
        maxLength = max(maxLength, j - i);
    }
    cout << maxLength << endl;
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