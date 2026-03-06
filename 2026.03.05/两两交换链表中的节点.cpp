#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    	ListNode* dummy = new ListNode(0, head);
    	ListNode* cur = dummy;
		
		while(cur->next && cur->next->next){
			ListNode* first = cur->next;
			ListNode* second = cur->next->next;
			
			first->next = second->next;
			second->next = first;
			cur->next = second;
			
			cur = first;
		} 	
    	
        return dummy->next;
    }
};

int main(){
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	
	Solution s;
	cout << s.swapPairs(head)->val; 
	
	return 0;
}
