#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	unordered_map<char, int> charIndex;
    	int ans = 0;
    	int left = 0;
    	
    	for(int right = 0;right < s.size();right++){
    		char curChar = s[right];
    		
    		if(charIndex.find(curChar) != charIndex.end() && charIndex[curChar] >= left){
    			left = charIndex[curChar] + 1;
			}
			
			charIndex[curChar] = right;
			
			ans = max(ans, right - left + 1);
    		
		}
        return ans;
    }
};

int main(){
	string str = "abcabcbb";
	
	Solution s;
	s.lengthOfLongestSubstring(str);
	
	return 0;
} 
