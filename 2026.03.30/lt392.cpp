class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sT = 0;
        int tT = 0;
        while(sT < s.size() && tT < t.size()){
            if(s[sT] == t[tT]){
                sT++;
            }
            tT++;
        }
        return sT == s.size();
    }
};