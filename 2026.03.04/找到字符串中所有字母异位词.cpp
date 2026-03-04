#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
//    暴力解法 
//    vector<int> findAnagrams(string s, string p) {
//        vector<int> ans;
//        sort(p.begin(), p.end());
//        for(int i = 0;i < s.size();i++){
//        	if(i + p.size() > s.size()){
//        		break;
//			}
//        	string str;
//			for(int j = i;j < i + p.size();j++){
//				str += s[j];
//			}
//			
//			sort(str.begin(), str.end());
//			if(p == str){
//				ans.push_back(i);
//			}
//		}		
//        return ans;
//    }

// 滑动窗口 
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> pmp;
        for(char c:p){
        	pmp[c]++;
		}
		
        int left = 0;
        int right = 0;
        
		unordered_map<char, int> smp;
        
		while(right < s.size()){
			smp[s[right]]++;
			right++;
			
			if(right - left > p.size()){
				smp[s[left]]--;
				if(smp[s[left]] == 0){
					smp.erase(s[left]);
				}
				left++;
			}
			
			if(right - left == p.size()){
				if(smp == pmp){
					ans.push_back(left);
				}
			}
		}
			
        return ans;
    }
};



int main(){
	string str = "cbaebabacd";
	string p = "abc";
	
	Solution s;
	s.findAnagrams(str, p);
	
	return 0;
} 
