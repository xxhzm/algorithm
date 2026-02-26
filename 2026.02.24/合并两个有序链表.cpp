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
	ListNode* list1n3 = new ListNode(4);
	ListNode* list1n2 = new ListNode(2, list1n3);
	ListNode* list1 = new ListNode(1, list1n2);
	 
	ListNode* list2n3 = new ListNode(4);
	ListNode* list2n2 = new ListNode(3, list2n3);
	ListNode* list2 = new ListNode(1, list2n2);
		
	return 0;
}
