class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<char> chars;
        int max_w = 0;
        int l = 0;

        for (int r = 0; r < n; r++) {
            while (chars.count(s[r])) {
                chars.erase(s[l]);
                l++;
            }
            chars.insert(s[r]);
            max_w = max(max_w, r - l + 1);
        }
        return max_w;
    }
};
