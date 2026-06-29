#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, c = 0;
        cin >> n >> m;

        string st, pt;
        cin >> st >> pt;

        set<char> chars(st.begin(), st.end());

        bool possible = true;

        for (char ch : pt) {
            if (!chars.count(ch)) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        while (st.size() < pt.size()) {
            st += st;
            c++;
        }

        if (st.find(pt) == string::npos) {
            st += st;
            c++;
        }

        if (st.find(pt) != string::npos)
            cout << c << '\n';
        else
            cout << -1 << '\n';
    }
}