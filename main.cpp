#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
class Parent{
    public:
    void solve(){
        cout<<"Parent";
    }
};
class Human:public Parent{
    public: 
    void solve(){
        cout<<"base";
    }
};
int main(){     
    return 0;
}
