#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> f;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            f[x]++;
        }

        if (f.size() > 2) {
            cout << "No\n";
        }
        else if (f.size() == 1) {
            cout << "Yes\n";
        }
        else {
            auto it = f.begin();
            int f1 = it->second;
            it++;

            int f2 = it->second;

            if (abs(f1 - f2) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}