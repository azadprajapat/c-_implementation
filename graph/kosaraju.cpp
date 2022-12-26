#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
const int N=1000; 
vector<vector<int>> adj;
void init_state(){
    adj={
        {},
        {2,4},
        {1,3},
        {2,4},
        {1,3,5},
        {6,4},
        {7,5,9},
        {6,8},
        {7,10,9},
        {6,8},
        {8,12},
        {10,12},
        {10,11}
    } 
}
int main(){     
    int n =12;
    adj.clear();
    adj.resize(n+1);
    init_state();
    
    
    
    
    return 0;
}