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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    	ListNode* dummy = new ListNode(0, head);
    	ListNode* fast = dummy;
    	ListNode* slow = dummy;
    	
    	for(int i = 0;i < n;i++){
    		fast = fast->next;
		}
		
		// fast 和 slow 一起走
        while(fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        
		// 删除 slow->next        
        ListNode* toDel = slow->next;
        slow->next = toDel->next;
		
        return dummy->next;
    }
};

int main(){
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	
	Solution s;
	s.removeNthFromEnd(head, 2); 
	
	return 0;
}
