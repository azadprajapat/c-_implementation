#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Selection{
    public:
    /*
    5 3 1 6 7
    1 3 5 6 7
    */
    void sort(vector<int>& arr){
        int n = arr.size();
        for(int i=0;i<n;i++){
            int mini = min_element(arr.begin()+i,arr.end())-arr.begin();
            swap(arr[mini],arr[i]);
        } 
    }
};
