#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  //  1    2   4  7 9 6
 //   0    1    2  3 4 5
  /*
  num = 2;
  j=0
  
  */
class Insertion{
    public:
    void sort(vector<int>& arr){
        int n = arr.size();
        int i=1;
        while(i<n){ 
            int num =arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>num){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=num;
            i++; 
        }

    }
};
