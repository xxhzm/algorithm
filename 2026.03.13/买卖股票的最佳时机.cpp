#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int ans = 0;
	int minPrice;
	
    int maxProfit(vector<int>& prices) {
        minPrice = prices[0];
        for(int i = 1;i < prices.size();i++){
			minPrice = min(minPrice, prices[i]);
        	ans = max(ans, prices[i] - minPrice);
		}
		
		return ans;
    }
};

int main(){
	vector<int> prices = {7,1,5,3,6,4};
	
	Solution s;
	s.maxProfit(prices);
	return 0;
} 
