#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        int p1n = 0, p2n = 0;
		// 获取链表长度
		while(p1){
			p1n++;
			p1 = p1->next; 
		}
		
		while(p2){
			p2n++;
			p2 = p2->next; 
		}
		
		p1 = headA;
		p2 = headB;
		//	先走	
		if(p1n > p2n){
			for(int i = 0; i < p1n - p2n;i++){
				p1 = p1->next;
			} 
		}else{
			for(int i = 0; i < p2n - p1n;i++){
				p2 = p2->next;
			}
		}
		
		while(p1 && p2){
			if(p1 == p2){
				return p1;
			}
			p1 = p1->next;
			p2 = p2->next;
		}
		
		return NULL;
    }
};

int main(){
	// 构造公共部分
	ListNode* common = new ListNode(8);
	common->next = new ListNode(9);
	common->next->next = new ListNode(10);
	
	// 构造链表 A
	ListNode* headA = new ListNode(1);
	headA->next = new ListNode(2);
	headA->next->next = new ListNode(3);
	headA->next->next->next = common;
	
	// 构造链表 B
	ListNode* headB = new ListNode(4);
	headB->next = new ListNode(5);
	headB->next->next = common;
	
	Solution s;
	cout << s.getIntersectionNode(headA, headB)->val;

	return 0;
}
