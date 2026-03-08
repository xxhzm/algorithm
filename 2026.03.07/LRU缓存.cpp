#include <bits/stdc++.h>

using namespace std; 

class node {
public:
    node* next;
    node* pre;
    int key;
    int val;
    node(int k, int v) {
        key = k;
        val = v;
        next = NULL;
        pre = NULL;
    }
};

class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
        head = new node(0, 0);
        tail = new node(0, 0);
        head->next = tail;
        tail->pre = head;
    }

    int get(int key) {
        if(mp.count(key)){
            remove(mp[key]);
            headInsert(mp[key]);
            return mp[key]->val;
        }

        return -1;
    }

    void put(int key, int value) {
        if(mp.count(key)){
            remove(mp[key]);
            delete mp[key];
            mp[key] = NULL;
        }

        node* tmp = new node(key, value);
        headInsert(tmp);
        mp[key] = tmp;
        if(mp.size() > cap){
            node* toDel = tail->pre;
            remove(toDel);
            mp.erase(toDel->key);
            delete toDel;
        }
    }

    void remove(node* tmp){
        node* tmpPre = tmp->pre;
        node* tmpNext = tmp->next;

        tmpPre->next = tmpNext;
        tmpNext->pre = tmpPre;
    }

    void headInsert(node* tmp){
        node* nxt = head->next;
        head->next = tmp;
        tmp->pre = head;
        tmp->next = nxt;

        nxt->pre = tmp;
    }
private:
    int cap;
    node* head, *tail;
    unordered_map<int, node*> mp;

};
