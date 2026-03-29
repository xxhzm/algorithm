class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        unordered_map<char, int> cnt;
        for (char c : s) cnt[c]++;

        for (auto& [ch, num] : cnt) {
            ans += (num / 2) * 2;
        }

        if(ans < s.size()){
            ans += 1;
        }
        return ans;
    }
};