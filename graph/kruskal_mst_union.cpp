#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
const int N = 1e5;  
int parent[N];
int depth[N];
void makeSet(){
    for(int i=0;i<N;i++){
        parent[i]=i;
        depth[i]=0;
    }
}
int find_parent(int node){
    if(node==parent[node]) return node;
    return parent[node]=find_parent(parent[node]);
}
void attach(int a,int b){
    a = find_parent(a);
    b = find_parent(b);
    if(depth[a]==depth[b]){
        parent[b]=a;
        depth[a]++;
    }else if(depth[a]<depth[b]){
        parent[a]=b;
    }else{
        parent[b]=a;
    }

}

int main(){    
    makeSet();
    return 0;
}