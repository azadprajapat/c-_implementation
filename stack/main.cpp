#include <iostream>
#include<bits/stdc++.h>
#include "generator.cpp"
#include "vi_stack.cpp"
using namespace std;

bool handle_query(int qr,int num,Cstack &cstack, stack<int>& st){
    switch (qr)
    {
    case 0:{ 
        return st.empty()==cstack.isempty();
        break;
    }
    case 1:{ 
        st.push(num);
        cstack.push(num);
        return true;
        break;
    }
    case 2:{ 
        if(st.empty()!=cstack.isempty())
            return false;
        if(st.empty())
            return true; 
        return st.top()==cstack.top();
        break;
    }
    case 3:{ 
        if(cstack.isempty()!=st.empty())
            return false;
        if(cstack.isempty()) return true;
        st.pop();
        cstack.pop();
        return true;
        break;
    }
    case 4:{ 
        return st.size()==cstack.size();
        break;
    }
    default:
        return true;
        break;
    }
} 
int main() {    
    int q=100000;
    Cstack cstack;
   
    Generator random;
    stack<int> st; 
    int passed=0;
    for(int i=0;i<q;i++){
        int query_type = random.generatenum(0,4);
        int num = random.generatenum(0,1e8);
        bool res = handle_query(query_type,num,cstack,st);
        if(res){
            passed++;
        } 
    }
    double result = (passed*100.0/q);
    cout<<"Passed: "<<result<<"\% queries"<<endl;

    
	return 0;
}