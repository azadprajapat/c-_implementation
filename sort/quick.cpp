#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Quick{
    /*
    1 2 2 5 5 6
    0 1 2 3 4 5
    pivot =0;
    i=5
    j=3;

    */
    int find_pivot(vector<int>&arr,int l,int r){
        int pivot =arr[l];
        int i=l;
        int j=r;
        while(i<j){
            while(arr[i]<=pivot) i++;
            while(arr[j]>pivot) j--;
            if(j>i)
                swap(arr[i],arr[j]);
        }
        swap(arr[l],arr[j]);
        return j;
    }   
    void quick_sort(vector<int>&arr,int l,int r){
        if(l>=r) return;
        int pivot=find_pivot(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);

    }
    public: 
    void sort(vector<int>& arr){ 
        quick_sort(arr,0,arr.size()-1);
    }
};
