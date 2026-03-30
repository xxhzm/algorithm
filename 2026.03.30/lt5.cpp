class Solution {
public:
    int n;
    string longestPalindrome(string s) {
        string ans;
        n = s.size();

        for(int i = 0;i < n;i++){
            string s1 = expand(s,i,i);
            string s2 = expand(s,i, i + 1);
            if(s1.size() > ans.size()){
                ans = s1;
            }
            if(s2.size() > ans.size()){
                ans = s2;
            }
        }

        return ans;
    }

    string expand (string s, int l, int r){
        string ans;
        while(l >= 0 && r < n && s[l] == s[r]){
            l--;
            r++;
        }

        return s.substr(l + 1, r - l - 1);
    }
};