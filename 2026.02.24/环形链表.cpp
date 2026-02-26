#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
    	if (!head || !head->next) {
    		return false;	
		}
		
    	ListNode* fast;
    	ListNode* slow;
    	
    	while(fast && fast->next){
    		fast = fast->next->next;
    		slow = slow->next;
    		
    		if(fast == slow){
    			return false;
			}
		}
    	
        return false;
    }
};

int main(){
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    n5->next = n3;

    
	Solution a;
	cout << a.hasCycle(n1);
	
	return 0;
}
