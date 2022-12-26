#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Merge{
    /*
    5 6 2 1 5 2
    0 1 2 3 4 5

    
    */
   void merge(vector<int>&arr,int l,int mid,int r){
        vector<int> brr(r-l+1);
        int i=l;
        int j=mid+1;
        int k=0;
        while(i<=mid&&j<=r){
            if(arr[i]>arr[j]){
                brr[k]=arr[j];
                j++;
            }else{
                brr[k]=arr[i];
                i++;
            }
            k++;
        }
        while(i<=mid){
            brr[k]=arr[i];
            i++;
            k++;
        }
        while(j<=r){
            brr[k]=arr[j];
            j++;
            k++;
        }  
        for(int i=l;i<=r;i++)
            arr[i]=brr[i-l];
   }
    void merge_sort(vector<int>&arr,int l,int r){
        if(l>=r) return;
        int mid  = (l+r)/2; 
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    public: 
    void sort(vector<int>& arr){
        merge_sort(arr,0,arr.size()-1);  
    }
};
