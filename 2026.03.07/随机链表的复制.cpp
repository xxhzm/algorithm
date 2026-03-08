#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
    	Node* dummy = new Node(0);
		Node* copy = dummy;
		Node* cur = head;
		
		unordered_map<Node*, Node*> mp;
		while(cur){
			copy->next = new Node(cur->val);
			copy = copy->next;
			mp[cur] = copy;
			cur = cur->next;
		} 
		
		copy = dummy->next;
		cur = head;
		
		while(cur){
			copy->random = mp[cur->random];
			copy = copy->next;
			cur = cur->next;
		}
		
		return dummy->next;
    }
};

int main(){
	vector<Node*> nodes;
    // 创建节点
    nodes.push_back(new Node(7));
    nodes.push_back(new Node(13));
    nodes.push_back(new Node(11));
    nodes.push_back(new Node(10));
    nodes.push_back(new Node(1));

    // 连接 next
    for (int i = 0; i < nodes.size() - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    // 设置 random
    nodes[0]->random = NULL;
    nodes[1]->random = nodes[0];
    nodes[2]->random = nodes[4];
    nodes[3]->random = nodes[2];
    nodes[4]->random = nodes[0];
    
    Solution s;
	s.copyRandomList(nodes[0]); 
} 
