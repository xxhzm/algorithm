class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        long long sum = 0;
        int gP = 0;
        int sP = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(gP < g.size() && sP < s.size()){
            if(s[sP] >= g[gP]){
                gP++;
                sP++;
                sum++;
            }else{
                sP++;
            }
        }

        return sum;
    }
};