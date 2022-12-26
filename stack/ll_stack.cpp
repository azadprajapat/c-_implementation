#include<iostream>
#include "linkedlist.cpp"
using namespace std;

class Cstack{
    Node* head; 
    public:
    Cstack(){
        head=NULL;
    }
    bool isempty(){ 
        return head==NULL;
    }
    void push(int num){
        Node* temp = new Node(num);
        if(head==NULL)
            head=temp;
        else{
            temp->next=head;
            head=temp;
        }

    }
    int top(){
        if(head==NULL)
            return -1;
        return head->data;
    }
    void pop(){
        if(head==NULL)
            return;
        Node* temp = head;
        head=head->next;
        
    }
    int size(){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count; 
    }
    
};