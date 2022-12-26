#include<bits/stdc++.h>
#include "bubble.cpp"
#include "insertion.cpp"
#include "merge.cpp"
#include "selection.cpp"
#include "quick.cpp"
#include "../Generator/main.cpp"
#include<iostream>
using namespace std; 
int tester(vector<int> arr){
    vector<int> temp=arr;
    Bubble bs;
    Insertion is;
    Selection sc;
    Merge mg; 
    Quick qc;   
    sort(temp.begin(),temp.end());
    if(temp==arr) return 1;
    cout<<"\nfailed for input: ";
    for(auto it:arr)
        cout<<it<<" ";
    cout<<endl;
    return 0;
} 
int main(){ 
    Generator generator;
    vector<vector<int>> input = generator.arrays();
    int count=0;
    for(int i=0;i<input.size();i++){
        count+=tester(input[i]); 
    }
    cout<<"Passed "<<count<<"/"<<input.size()<<" Testcases";
    return 0;
} 
 