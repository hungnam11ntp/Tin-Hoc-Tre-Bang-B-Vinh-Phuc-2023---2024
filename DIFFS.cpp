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
    
    int max = *max_element(a.begin(), a.end()), min = *min_element(a.begin(), a.end()), cnt_max = 0, cnt_min = 0;
    for (int i: a) {
        if (i == max) {
            cnt_max++;
        }
        if (i == min) {
            cnt_min++;
        }
    }
    
    cout << max - min << " " << cnt_max * cnt_min;
    
    return 0;
}
