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
ListNode* middleNode(ListNode* head) {
	ListNode* res = head;
	while(head && head->next){
		res = res->next;
		head = head->next->next;	
	}
	return res;
}

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
    
public:
    bool isPalindrome(ListNode* head) {
    	ListNode* mid = middleNode(head);
		ListNode* rev = reverseList(mid);
		// 双指针同时走判断是否回文 
		ListNode* p1 = head;
		ListNode* p2 = rev;
		while(p2){
			if(p1->val != p2->val){
				return false;
			}
			
			p1 = p1->next;
			p2 = p2->next;
		} 
		
		return true;
    }
};

int main(){
	vector<int> vals = {1, 2, 2, 1};

	ListNode* head = nullptr;
	ListNode* tail = nullptr;
	
	for(int v : vals){
	    ListNode* node = new ListNode(v);
	    if(!head){
	        head = node;
	        tail = node;
	    }else{
	        tail->next = node;
	        tail = node;
	    }
	}

	Solution s;
	cout << s.isPalindrome(head);
	return 0;
} 
