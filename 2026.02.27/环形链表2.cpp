#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    	if(head == nullptr || head->next == nullptr) {
    		return nullptr;
		}
		
		ListNode* fast = head;
    	ListNode* slow = head;
    	while(fast && fast->next){
			fast = fast->next->next;
			slow = slow->next;	
			
			if(fast == slow){
				ListNode* ptr = head;
				while(ptr != slow){
					ptr = ptr->next;
					slow = slow->next; 
				}
				
				return ptr;
			}
		}
		
        return nullptr;
    }
};


int main(){
	    // 创建节点
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);
    ListNode* node6 = new ListNode(6);
    ListNode* node7 = new ListNode(7);

    // 连接链表 1->2->3->4->5->6->7
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;

    // 构造环：5 -> 3
    node7->next = node3;
    
    Solution s;
    s.detectCycle(head);
	return 0;
} 
