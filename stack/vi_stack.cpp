#include<iostream> 
#include<bits/stdc++.h>

using namespace std;

class Cstack{
    vector<int> st; 
    public:
    Cstack(){ 
        st.clear();
    }
    bool isempty(){  
        return st.empty();
    }
    void push(int num){
        st.push_back(num);
    }
    int top(){
        if(st.empty())
            return -1;
        return st.back();
    }
    void pop(){ 
        int sz = st.size();
        if(sz==0)
            return ;
        st.erase(st.begin()+sz-1);
    }
    int size(){ 
        return st.size(); 
    }
    
};