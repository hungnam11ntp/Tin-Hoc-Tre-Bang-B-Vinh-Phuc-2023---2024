#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 0, curr = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        ans += (a[i] - curr + 5 - 1) / 5;
        curr = a[i];
    }
    
    cout << ans;
    
    return 0;
}
