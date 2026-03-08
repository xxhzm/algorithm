#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> ans;
		if(strs.size() == 0){
			return ans;
		} 
		
		unordered_map<string, vector<string>> mp;
		for(string str: strs){
			string key = str;
			sort(key.begin(), key.end());
			mp[key].push_back(str);
		}
		
		for(auto& pair: mp){
			ans.push_back(pair.second);
		}
		
		return ans;
	};
};

int main(){
	
	vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
	Solution s;
	s.groupAnagrams(strs);
	
	return 0;
}
