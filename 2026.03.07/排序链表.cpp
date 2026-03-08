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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
        	return head;
		}
		
		ListNode* slow = head;
		ListNode* fast = head->next;
		while(fast && fast->next){
			slow = slow->next;
			fast = fast->next->next;
		}
		
		ListNode* mid = slow->next;
		
		slow->next = nullptr;
		
		ListNode* left = sortList(head);
		ListNode* right = sortList(mid);
		
		return mergeTwoLists(left, right);
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    	ListNode* dummy = new ListNode(0); 
      	ListNode* tail = dummy;
      
    	while(list1 && list2){
    		if(list1->val < list2->val){
      			tail->next = list1;
      			list1 = list1->next;
			}else{
				tail->next = list2;
      			list2 = list2->next;
			}
		
			tail = tail->next;
	  	}
	  
		tail->next = list1 ? list1 : list2;
      
      	return dummy->next;
    }
};

int main(){
	ListNode* list1 = new ListNode(4);
	list1->next = new ListNode(2);
	list1->next->next = new ListNode(1);
	list1->next->next->next = new ListNode(3);


	Solution s;
	s.sortList(list1);
	
	return 0;
} 
