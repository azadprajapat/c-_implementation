
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    int key;
    Node(int val,int k){
        prev=NULL;
        next=NULL;
        key=k;
        data=val;
    }
};
class LRUCache {
public:  
    int _capacity;
    Node* head;
    Node* tail;
    unordered_map<int,Node*> mp;
    LRUCache(int capacity) { 
       _capacity=capacity;
        head=NULL;
        tail=NULL;
        mp.clear();
    }  
    void update_priority(int key){
        Node* item = mp[key];
        Node* left= item->prev;
        Node* right = item->next;
        if(tail==item) return;
        if(left!=NULL){
            if(left->next!=right)
                left->next=right;
        }else{
            if(item->next)
                head=item->next;
        }
        
        if(right!=NULL)
            if(right->prev!=left)
                right->prev=left;
        if(tail!=item){
            tail->next=item;
            item->prev=tail;
            item->next=NULL;
            tail=tail->next;
        } 
                
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            update_priority(key);
            return mp[key]->data;
        } 
        return -1;
    }
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            mp[key]->data=value;
            update_priority(key);
        }else{
            mp[key]= new Node(value,key);
            if(tail==NULL||head==NULL){
                head=mp[key];
                tail=head;
            }else{
                tail->next=mp[key];
                mp[key]->prev=tail;
                tail=tail->next;
            }
            
            if(mp.size()>_capacity){
                Node* temp=head;
                int ek = temp->key;
                if(head&&head->next){
                    head=head->next;
                    head->prev=NULL;
                }
                mp.erase(ek);
            }
        } 
    }
     
};
int main(){
    int capacity=5;
    int key=2;
    int value=3;
    LRUCache* obj = new LRUCache(capacity);
    int param_1 = obj->get(key);
    obj->put(key,value);
}
