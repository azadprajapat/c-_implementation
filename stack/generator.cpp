#include<bits/stdc++.h>
using namespace std;
class Generator{
    public: 
    static vector<int> generate(int min,int max, int range){
        vector<int> ans;
        for(int i=0;i<range;i++){
            ans.push_back(generatenum(min,max));
        }
        return ans;
    } 
    static int generatenum(int min,int max){
        return  rand()%(max-min+1) +min;   
    }

};
