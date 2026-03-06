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
		ListNode* common;
		
		ListNode* p1 = headA;
		int p1Length = 1;
		// 获取	headA 长度
		while(p1->next){
			p1Length++;
			p1 = p1->next;
		}
		
		ListNode* p2 = headB;
		int p2Length = 1;
		// 获取	headB 长度
		while(p2->next){
			p2Length++;
			p2 = p2->next;
		}
		
		p1 = headA;
		p2 = headB;
		
		if(p1Length > p2Length){
			for(int i = 0; i < p1Length - p2Length;i++){
				p1 = p1->next;
			}
		}else{
			for(int i = 0; i < p2Length - p1Length;i++){
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
	s.getIntersectionNode(headA, headB);
	
	return 0;
} 
