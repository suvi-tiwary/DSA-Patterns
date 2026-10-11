#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int>>&adj,int node,vector<int>&vis,vector<int>&res){
    res.push_back(node);
    vis[node]=1;
    for(int i=0;i<adj[node].size();i++){
        int neigh=adj[node][i];
        if(vis[neigh]==0){
            dfs(adj,neigh,vis,res);
        }
    }
}

int main(){
    vector<vector<int>> adj ={
        {2,3,1},{0},{0,4},{0},{2}
    };
    int n= adj.size();
    vector<int> vis(n,0);
    vector<int>res;
    dfs(adj,0,vis,res);
    
    for(int node : res){
        cout << node << " " ;
    }

    return 0;
}