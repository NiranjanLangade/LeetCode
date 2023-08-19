class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> m(256, 0), n(256, 0);
        for (int i = 0; i < s.length(); ++i) {
            if (m[s[i]] == 0 && n[t[i]] == 0) {
                m[s[i]] = t[i];
                n[t[i]] = s[i];
            } else if (m[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};