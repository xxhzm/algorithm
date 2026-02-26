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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode dummy;
       ListNode* tail = &dummy;
       
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
	   return dummy.next;
    }
};
int main(){
	// 构造第一个有序链表 1->3->5
	ListNode* l1 = new ListNode(1);
	l1->next = new ListNode(3);
	l1->next->next = new ListNode(5);
	
	// 构造第二个有序链表 2->4->6
	ListNode* l2 = new ListNode(2);
	l2->next = new ListNode(4);
	l2->next->next = new ListNode(6);
	
	Solution s;
	s.mergeTwoLists(l1, l2);
	return 0;
} 
