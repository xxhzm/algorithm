#include <bits/stdc++.h>

using namespace std;
 
class Solution {
public:
	vector<string> ans;
	string path;
	vector<string> mp = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };
    
    void dfs(string &digits, int index){
    	if(index == digits.size()){
    		ans.push_back(path);
    		return;
		}
		
		string le = mp[digits[index] - '0'];
		
		for(char ch: le){
			path.push_back(ch);
			dfs(digits, index + 1);
			path.pop_back();
		}
	}
    
    vector<string> letterCombinations(string digits) {
    	if(digits.empty()){
    		return ans;
		}
		
		dfs(digits, 0);
    	
        return ans;
    }
};

int main(){
	string digits = "23";
	
	Solution s;
	cout << s.letterCombinations(digits)[1];
	 
	return 0;
}
