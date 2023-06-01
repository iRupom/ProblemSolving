#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        map<char, int> ms;
        map<char, int> mt;
        for (int i = 0; i < s.size(); i++) {
            ms[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            mt[t[i]]++;
        }

        bool flag = true;

        for (auto it : ms) {
            if (it.second != mt[it.first]) {
                flag = false;
            }
        }

        return flag;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("F:/CP/input.txt", "r", stdin);
    freopen("F:/CP/output.txt", "w", stdout);
#endif

    string s, t;
    cin >> s >> t;
    Solution sol;
    cout << sol.isAnagram(s, t);

    return 0;
}
