#include <bits/stdc++.h>

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
    ListNode* reverseList(ListNode* head) {
    	if(!head || !head->next) return head;

        ListNode* first = nullptr;
        ListNode* second = head;
        ListNode* third = nullptr;
        
        while(second){   	
        	third = second->next;
        	second->next = first;
        	first = second;
        	second = third;
		}
		
		return first;
    }
};

int main(){
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);

	Solution s;
	cout << s.reverseList(head)->val;
//	s.reverseList(head);
	
	return 0;
} 
