// Subtask 1

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(ll n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll n, max_length = 0, max_sum = 0, idx = 0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    while (idx < n) {
        vector<int> p;
        while (idx < n && is_prime(a[idx])) {
            p.push_back(a[idx]);
            idx++;
        }
        ll k = p.size();
        for (int i = 0; i < k; i++) {
            ll curr = 0;
            for (int j = i; j < k; j++) {
                curr += p[j];
                if (max_length == j - i + 1) {
                    if (is_prime(curr)) max_sum = max(max_sum, curr);
                }
                if (j - i + 1 > max_length) {
                    if (is_prime(curr)) {
                        max_length = j - i + 1;
                        max_sum = curr;
                    }
                }
            }
        }
        idx++;
    }
    
    cout << max_length << " " << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
