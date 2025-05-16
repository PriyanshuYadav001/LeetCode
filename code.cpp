#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX_T 601
#define print(x) cout << x << endl

typedef long long ll;
using BSet = bitset<MAX_T>;

template <typename T>
void read(T& container) {
    for (auto& elem : container) cin >> elem;
}

template <typename T>
void read2D(vector<vector<T>>& matrix) {
    for (auto& row : matrix) read(row);
}

template <typename T>
void readPairs(vector<pair<T, T>>& pairs) {
    for (auto& p : pairs) cin >> p.first >> p.second;
}

void solve() {
    long long n; cin>>n;
    vector<long long> arr(n);
    long long minEle=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        minEle=min(minEle,arr[i]);
    }
    long long res=0;
    for(int i=0;i<n;i++){
        res+=(arr[i]-minEle);
    }
    cout<<res<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
