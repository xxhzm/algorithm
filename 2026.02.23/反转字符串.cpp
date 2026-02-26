#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
		// Ë«Ö¸Õë iÍ· jÎ²°Í
		int i = 0;
		int j = s.size() - 1;
		char temp;
		while (i < j){
			swap(s[i], s[j]);
			i++;
			j--; 
		}
		for(i = 0;i < s.size();i++){
			std::cout << s[i];
		}
    }
};

int main(){
	std::vector<char> vec = {'A',' ','m','a','n',',',' ','a',' ','p','l','a','n',',',' ','a',' ','c','a','n','a','l',':',' ','P','a','n','a','m','a'};
	
	Solution a;
	a.reverseString(vec);
	
	return 0;
} 
