class Solution {
public:
    string makeGood(string s) {
        vector<char> v;
        for (int i = 0; i < s.length(); i++) {
            v.push_back(s[i]);
            while (v.size() >= 2) {
                char p = v[v.size() - 1];
                char q = v[v.size() - 2];
                if ((p + 'a' - 'A' == q) || (q + 'a' - 'A' == p)) {
                    v.pop_back();
                    v.pop_back();
                } else {
                    break;
                }
            }
        }
        ostringstream oss;
        for (auto c : v) {
            oss << c;
        }
        return oss.str();
    }
};