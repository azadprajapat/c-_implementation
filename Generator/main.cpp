#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Generator{
    public:
    vector<vector<int>> arrays(){
        vector<vector<int>> ans;
        for(int i=0;i<100;i++){
            int a=1;
            vector<int> temp;
            int b = 100;
            double offset = rand()*1.0/RAND_MAX; 
            int n = a + (b-a)*offset;
            for(int i=0;i<n;i++){
                double num = (rand()*1.0/RAND_MAX)*(1e8);
                temp.push_back(num);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};